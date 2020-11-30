#ifndef TEXTTRANSFORMER_H
#define TEXTTRANSFORMER_H

#include <string>
#include <sstream>
#include <unordered_map>
#include <algorithm>
#include "Character.hpp"
#include "Constants.hpp"

namespace GeekCode {

	class TextTransformer {
		std::unordered_map<char, Character> character;
		std::string transformWord(const std::string & word);
		
		TextTransformer();
	public:
		static TextTransformer & getInstance();
		void init();
		std::string get(std::string::const_iterator first, std::string::const_iterator last, char customCharacter);
		std::string get(const std::string & text, char customCharacter);
	};

}

#endif // TEXTTRANSFORMER_H