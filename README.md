# GeekCode v2.0 [![license](https://img.shields.io/github/license/DAVFoundation/captain-n3m0.svg?style=flat-square)](https://github.com/NouemanKHAL/GeekCode/blob/master/LICENSE)


A tool that helps you save time to write documents in a stylish geeky way.

# Example 
* CMakeLists.txt :

![alt text](https://i.imgur.com/4MYKD8q.png)

* main.cpp :

![alt text](https://i.imgur.com/ErYvpwh.png)

# Requirements
* C++14 (Not tested with other versions)
* CMake v3.5.1 or higher
* Make (for Windows users : copy and rename MinGW/bin/mingw32-make.exe as make.exe)

# Usage
* Go to the root of the project then : 
```console 
foo@bar/GeekCode:~$ cd build
foo@bar/GeekCode/build:~$ cmake .. -G "MinGW Makefiles"
foo@bar/GeekCode/build:~$ make
```
* Launch your executable "geekcode".
```console 
foo@bar/GeekCode/build:~$ geekcode <filename.txt>
```

# TO-DOs
* Support essential alphanumeric characters -- DONE.
* Support keywords to draw some shapes/emojis.
* Support customizable character to draw characters (# by default).

