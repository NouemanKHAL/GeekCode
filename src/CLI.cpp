#include "CLI.hpp"

namespace GeekCode {

    namespace CLI {

        bool isFlag(const std::string flag) {
            static const std::unordered_map<std::string, bool> exist = {
                {"-h", true}, {"--help", true},  
                {"-v", true}, {"--version", true}, 
                {"-o", true}, {"--output", true}, 
                {"-c", true}, {"--custom", true}
            };
            return exist.find(flag) != exist.end();
        }

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
            std::cout << constants::version << std::endl;
        }

        void processRequest(std::string filename, std::string outputName, char customCharacter = '#') {
            try {
                std::string fileToStr = FileHandler::readFileToString(filename);
                std::string result = TextTransformer::getInstance().get(fileToStr, customCharacter);        

                if (outputName.empty()) {
                    std::cout << result << std::endl;
                } else {
                    FileHandler::writeStringToFile(outputName, result);
                }
            } catch (const FileNotFound & exception) {
                std::cout << exception.what() << std::endl;
            }
        }

    }

}