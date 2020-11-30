#include "FileHandler.hpp"

namespace GeekCode {
    
    std::string FileHandler::readFileToString(std::string filename) {
        std::string result;
        std::ifstream inputFileStream(filename);
        
        if (inputFileStream.is_open()) {
            std::stringstream buf;
            buf << inputFileStream.rdbuf();
            result = buf.str();
        } else {
            throw FileNotFound("Input file could not be opened : " + filename);
        }

        return result;
    }

    void FileHandler::writeStringToFile(std::string filename, const std::string & data) {
        std::ofstream outputFileStream(filename, std::ios::out);

        if (outputFileStream.is_open()) {
            outputFileStream << data;
        } else {
            throw FileNotFound("Output file could not be opened : " + filename);
        }
    }

}
