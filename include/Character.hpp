#pragma once

#include <string>
#include <array>
#include "Constants.hpp"

class Character {
		std::array<std::string, constants::kCharacterSize> line;
	public:
		Character();
		std::string getLine(size_t n);
		void setLine(std::string, size_t);
		std::string& operator[](size_t);
		std::string& at(size_t);
};
