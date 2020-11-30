#include <iostream>
#include <vector>
#include <unordered_map>
#include "TextTransformer.hpp"
#include "FileHandler.hpp"
#include "FileNotFound.hpp"

using namespace GeekCode;

void printHelp() {
    std::string help = R"""(
    Usage: geekcode [options] file
    Options:
        -h --help :                Display this information.
        -v --version :             Display the version of GeekCode.
        -c --custom <char> :       Use a custom character to print the text.
        -o --output <file> :       Specifies the output file.
    )""";
    
    std::cout << help;
}

void printVersion() {
    std::cout << "GeekCode v2.5 - 2020" << std::endl;
}

void processRequest(std::string filename, std::string outputName, char customCharacter = '#') {
    try {
        std::string fileToStr = FileHandler::readFileToString(filename);
        std::string result = TextTransformer::getInstance().get(fileToStr.begin(), fileToStr.end(), customCharacter);        

        if (outputName.empty()) {
            std::cout << result << std::endl;
        } else {
            FileHandler::writeStringToFile(outputName, result);
        }
    } catch (const FileNotFound & exception) {
        std::cout << exception.what() << std::endl;
    }
}


bool isFlag(const std::string flag) {
    static const std::unordered_map<std::string, bool> exist = {
        {"-h", true},
        {"--help", true},  
        {"-v", true},
        {"--version", true}, 
        {"-o", true},
        {"--output", true}, 
        {"-c", true},
        {"--custom", true}, 
    };
    return exist.find(flag) != exist.end();
}

int main(int argc, char *argv[]) {
    std::vector<std::string> args;
    args.reserve(argc - 1);

    for (size_t i = 1 ; i < argc ; ++i) {
        args.push_back(std::string(argv[i]));
    }

    std::string filename;
    std::string outputFileName;
    char customCharacter = '#';

    char command = 'h';

    for (auto it = args.begin() ; it != args.end(); ++it) {
        if (!isFlag(*it) && filename.empty()) {
            filename = *it;
            command = 'a';
            continue;
        }  

        if (*it == "--version" || *it == "-v") {
            command = 'v';
            break;
        }

        if (*it == "--help" || *it == "-h") {
            command = 'h';
            break;
        }

        if (*it == "--custom" || *it == "-c") {
            ++it;
            customCharacter = (*it)[0];
            continue;
        }

        if (*it == "--output" || *it == "-o") {
            ++it;
            outputFileName = *it;
            continue;
        }
    }

    if (command == 'a') {
        processRequest(filename, outputFileName, customCharacter);
    } else if (command == 'v') {
        printVersion();
    } else {
        printHelp();
    }
    
}
