#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <array>
#include <stdexcept>
#include "Constants.hpp"

namespace GeekCode {

	class Character {
		std::array<std::string, constants::kCharacterSize> line;
	public:
		Character() = default;
		const std::string & getLine(size_t index);
		void setLine(std::string, size_t index);
		std::string & operator[](size_t index);
		std::string & at(size_t index);
	};

}

#endif // CHARACTER_H