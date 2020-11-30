#ifndef FILENOTFOUND_H
#define FILENOTFOUND_H

#include <string>
#include <stdexcept>

namespace GeekCode {

    class FileNotFound : public std::runtime_error {
        public:
            FileNotFound(const char* error_message);
            FileNotFound(const std::string & error_message);
    };



}

#endif // FILENOTFOUND_H