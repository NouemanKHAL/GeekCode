#include "Letter.h"

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



