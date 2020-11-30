#include "FileNotFound.hpp"

namespace GeekCode {

    FileNotFound::FileNotFound(const char* error_message) : std::runtime_error(error_message) {};
    FileNotFound::FileNotFound(const std::string & error_message) : std::runtime_error(error_message.c_str()) {}

}


