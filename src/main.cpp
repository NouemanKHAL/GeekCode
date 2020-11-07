#include <iostream>
#include "Character.hpp"
#include "TextTransformer.hpp"

int main(int argc, char *argv[])
{
    std::string input;
    std::getline(std::cin, input);
    std::cout << TextTransformer::getInstance().get(input.begin(), input.end()) << std::endl;
}
