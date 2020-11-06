//============================================================================
// Name        : GeekCode.cpp
// Author      : Noueman Khalikine
// Version     : 2.0
// Copyright   : Contact me at : noueman.khal@gmail.com
// Description : main file
//============================================================================

#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <unordered_map>
#include "Letter.hpp"
#include "TextTransformer.hpp"

int main()
{
    std::string input = "Hello World\nTERREXO";
    std::cout << TextTransformer::getInstance().get(input.begin(), input.end()) << std::endl;
}
