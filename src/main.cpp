#include <iostream>
#include <fstream>
#include "Character.hpp"
#include "TextTransformer.hpp"

int main(int argc, char *argv[])
{
    std::ifstream inputFile(argv[1]);

    if (inputFile) {
        std::stringstream buf;
        buf << inputFile.rdbuf();

        std::string inputFileToStr = buf.str();

        std::string filename = argv[1];
        filename = filename.substr(0, std::max(0, static_cast<int>(filename.size()) - 4)) + "-geek.txt";


        std::string result = TextTransformer::getInstance().get(inputFileToStr.begin(), inputFileToStr.end());

        std::ofstream outputFile(filename, std::ios::out);
        outputFile << result;
    } else {
        std::cout << "File Not Found : " << argv[1] << " ." << std::endl;
    }
}
