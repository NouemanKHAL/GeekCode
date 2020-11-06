#pragma once

#include <string>
#include <array>

class Letter {
		std::array<std::string, 5> line;
	public:
		Letter();
		std::string getLine(size_t n);
		void setLine(std::string, size_t);
		std::string operator[](size_t);
};
