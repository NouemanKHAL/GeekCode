#pragma once

#include <string>
#include <fstream>
#include <sstream>
#include "FileNotFound.hpp"

namespace GeekCode {

    class FileHandler {
        public:
            FileHandler() = delete;
            static std::string readFileToString(std::string);
            static void writeStringToFile(std::string, const std::string &);
    };
    
}