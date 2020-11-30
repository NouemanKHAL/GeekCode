#pragma once

#include <string>
#include <stdexcept>

namespace GeekCode {

    class FileNotFound : public std::runtime_error {
        public:
            FileNotFound(const char*);
            FileNotFound(const std::string &);
    };

}