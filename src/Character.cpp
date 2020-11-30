#include "Character.hpp"

using namespace GeekCode;

const std::string & Character::getLine(size_t index) {
	return line[index];
}

void Character::setLine(std::string data , size_t index) {
	if (index < line.size()) {
		line[index] = data;
	}
}

std::string & Character::operator[](size_t index) {
	return line[index];
}

std::string & Character::at(size_t index) {
	if (index >= constants::kCharacterSize) {
		throw std::out_of_range(std::to_string(index) + " : index is out of range");
	}
	return line[index];
}



