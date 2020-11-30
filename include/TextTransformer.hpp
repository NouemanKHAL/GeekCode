#pragma once

#include <string>
#include <sstream>
#include <unordered_map>
#include <algorithm>
#include "Character.hpp"
#include "Constants.hpp"

namespace GeekCode {

	class TextTransformer {
		std::unordered_map<char, Character> character;
		std::string transformWord(const std::string &);
		
		TextTransformer();
	public:
		static TextTransformer & getInstance();
		void init();
		std::string get(std::string::const_iterator, std::string::const_iterator, char);
		std::string get(const std::string &, char);
	};

}
