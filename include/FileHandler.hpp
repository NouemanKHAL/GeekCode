#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <string>
#include <fstream>
#include <sstream>
#include "FileNotFound.hpp"

namespace GeekCode {

    class FileHandler {
        public:
            FileHandler() = delete;
            static std::string readFileToString(std::string filename);
            static void writeStringToFile(std::string filename, const std::string & data);
    };
    
}

#endif // FILEHANDLER_H