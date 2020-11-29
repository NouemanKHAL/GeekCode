#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_map>
#include "Character.hpp"
#include "TextTransformer.hpp"

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
    std::cout << "GeekCode v2.0 - 2020" << std::endl;
}

void processFile(std::string filename, std::string outputName = "", char customCharacter = '#') {
    std::ifstream inputFile(filename);

    if (inputFile) {
        std::stringstream buf;
        buf << inputFile.rdbuf();

        std::string inputFileToStr = buf.str();
        std::string result = TextTransformer::getInstance().get(inputFileToStr.begin(), inputFileToStr.end(), customCharacter);


        if (outputName.empty()) {
            outputName = filename.substr(0, std::max(0, static_cast<int>(filename.size()) - 4)) + "-geek.txt";
        } 

        std::ofstream outputFile(outputName, std::ios::out);
        outputFile << result;
    } else {
        std::cout << "File Not Found : " << filename << " ." << std::endl;
    }
}


bool isFlag(const std::string flag) {
    static const std::unordered_map<std::string, bool> exist = {
        {"--help", true},  {"-h", true},
        {"--version", true}, {"-v", true},
        {"--output", true}, {"-o", true},
        {"--custom", true}, {"-c", true}
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
        processFile(filename, outputFileName, customCharacter);
    } else if (command == 'v') {
        printVersion();
    } else {
        printHelp();
    }
    
}
