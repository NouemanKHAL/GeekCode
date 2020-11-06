#include <iostream>
#include "Letter.hpp"
#include "TextTransformer.hpp"

int main(int argc, char *argv[])
{
    std::string input = "Hello World\nTERREXO";
    std::cout << TextTransformer::getInstance().get(input.begin(), input.end()) << std::endl;
}
