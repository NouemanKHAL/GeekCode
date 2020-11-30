#ifndef FILENOTFOUND_H
#define FILENOTFOUND_H

#include <string>
#include <stdexcept>

namespace GeekCode {

    class FileNotFound : public std::runtime_error {
        public:
            FileNotFound(const char*);
            FileNotFound(const std::string &);
    };



}

#endif // FILENOTFOUND_H