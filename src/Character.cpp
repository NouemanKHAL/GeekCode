#include "Character.hpp"
#include <stdexcept>

Character::Character() {}

std::string Character::getLine(size_t index){
	return line[index];
}

void Character::setLine(std::string _line , size_t index){
	if (index < line.size()) {
		line[index] = _line;
	}
}

std::string & Character::operator[](size_t index) {
	return line[index];
}

std::string& Character::at(size_t index) {
	if (index >= constants::kCharacterSize) {
		throw std::out_of_range(std::to_string(index) + " : index is out of range");
	}
	return line[index];
}



