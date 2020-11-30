#ifndef CLI_H
#define CLI_H

#include <iostream>
#include <vector>
#include <unordered_map>
#include "TextTransformer.hpp"
#include "FileHandler.hpp"
#include "FileNotFound.hpp"

namespace GeekCode {

    namespace CLI {

        bool isFlag(const std::string flag);

        void printHelp();

        void printVersion();

        void processRequest(std::string filename, std::string outputName, char customCharacter);

    }

}

#endif // CLI_H