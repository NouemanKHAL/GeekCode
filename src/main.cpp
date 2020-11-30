#include <vector>
#include "CLI.hpp"

using namespace GeekCode::CLI;

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
