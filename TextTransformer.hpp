#pragma once
#include <string>
#include <sstream>
#include <unordered_map>
#include <algorithm>
#include "Letter.hpp"
#include "Constants.hpp"

class TextTransformer
{
	std::unordered_map<char, Letter> letter;
	std::string transformWord(const std::string&);

	TextTransformer();

public:
	static TextTransformer& getInstance();
	void init();
	std::string get(std::string::iterator, std::string::iterator);
};

