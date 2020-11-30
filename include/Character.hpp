#pragma once

#include <string>
#include <array>
#include <stdexcept>
#include "Constants.hpp"

namespace GeekCode {

	class Character {
		std::array<std::string, constants::kCharacterSize> line;
	public:
		Character() = default;
		const std::string & getLine(size_t);
		void setLine(std::string, size_t);
		std::string & operator[](size_t);
		std::string & at(size_t);
	};

}

