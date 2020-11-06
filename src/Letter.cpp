#include "Letter.hpp"
#include <stdexcept>

Letter::Letter() {}

std::string Letter::getLine(size_t index){
	return line[index];
}

void Letter::setLine(std::string _line , size_t index){
	if (index < line.size()) {
		line[index] = _line;
	}
}

std::string & Letter::operator[](size_t index) {
	return line[index];
}

std::string& Letter::at(size_t index) {
	if (index >= constants::LETTER_SIZE) {
		throw std::out_of_range(std::to_string(index) + " : index is out of range");
	}
	return line[index];
}



