//============================================================================
// Name        : GeekCode.cpp
// Author      : Noueman Khalikine
// Version     : 1.0
// Copyright   : Contact me at : noueman.khal@gmail.com
// Description : main file
//============================================================================

#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <unordered_map>
#include "Letter.h"

const int LETTER_SIZE = 5;

int main()
{
    std::array<Letter, 50> tab;
    std::unordered_map<char, Letter> letter;

    letter['a'].setLine("#####", 0);
    letter['a'].setLine("#   #", 1);
    letter['a'].setLine("#####", 2);
    letter['a'].setLine("#   #", 3);
    letter['a'].setLine("#   #", 4);

    letter['b'].setLine("#####", 0);
    letter['b'].setLine("#   #", 1);
    letter['b'].setLine("#### ", 2);
    letter['b'].setLine("#   #", 3);
    letter['b'].setLine("#####", 4);

    letter['c'].setLine("#####", 0);
    letter['c'].setLine("#    ", 1);
    letter['c'].setLine("#    ", 2);
    letter['c'].setLine("#    ", 3);
    letter['c'].setLine("#####", 4);

    letter['d'].setLine("#####", 0);
    letter['d'].setLine("#   #", 1);
    letter['d'].setLine("#   #", 2);
    letter['d'].setLine("#   #", 3);
    letter['d'].setLine("#####", 4);

    letter['e'].setLine("#####", 0);
    letter['e'].setLine("#    ", 1);
    letter['e'].setLine("#####", 2);
    letter['e'].setLine("#    ", 3);
    letter['e'].setLine("#####", 4);

    letter['f'].setLine("#####", 0);
    letter['f'].setLine("#    ", 1);
    letter['f'].setLine("#####", 2);
    letter['f'].setLine("#    ", 3);
    letter['f'].setLine("#    ", 4);

    letter['g'].setLine("#####", 0);
    letter['g'].setLine("#    ", 1);
    letter['g'].setLine("# ###", 2);
    letter['g'].setLine("#   #", 3);
    letter['g'].setLine("#####", 4);

    letter['h'].setLine("#   #", 0);
    letter['h'].setLine("#   #", 1);
    letter['h'].setLine("#####", 2);
    letter['h'].setLine("#   #", 3);
    letter['h'].setLine("#   #", 4);

    letter['i'].setLine("#####", 0);
    letter['i'].setLine("  #  ", 1);
    letter['i'].setLine("  #  ", 2);
    letter['i'].setLine("  #  ", 3);
    letter['i'].setLine("#####", 4);

    letter['j'].setLine("#####", 0);
    letter['j'].setLine("    #", 1);
    letter['j'].setLine("    #", 2);
    letter['j'].setLine("#   #", 3);
    letter['j'].setLine("#####", 4);

    letter['k'].setLine("#   #", 0);
    letter['k'].setLine("#  # ", 1);
    letter['k'].setLine("###  ", 2);
    letter['k'].setLine("#  # ", 3);
    letter['k'].setLine("#   #", 4);

    letter['l'].setLine("#    ", 0);
    letter['l'].setLine("#    ", 1);
    letter['l'].setLine("#    ", 2);
    letter['l'].setLine("#    ", 3);
    letter['l'].setLine("#####", 4);

    letter['m'].setLine("#   #", 0);
    letter['m'].setLine("## ##", 1);
    letter['m'].setLine("# # #", 2);
    letter['m'].setLine("#   #", 3);
    letter['m'].setLine("#   #", 4);

    letter['n'].setLine("#   #", 0);
    letter['n'].setLine("##  #", 1);
    letter['n'].setLine("# # #", 2);
    letter['n'].setLine("#  ##", 3);
    letter['n'].setLine("#   #", 4);

    letter['o'].setLine("#####", 0);
    letter['o'].setLine("#   #", 1);
    letter['o'].setLine("#   #", 2);
    letter['o'].setLine("#   #", 3);
    letter['o'].setLine("#####", 4);

    letter['p'].setLine("#####", 0);
    letter['p'].setLine("#   #", 1);
    letter['p'].setLine("#####", 2);
    letter['p'].setLine("#    ", 3);
    letter['p'].setLine("#    ", 4);

    letter['q'].setLine("#####", 0);
    letter['q'].setLine("#   #", 1);
    letter['q'].setLine("#   #", 2);
    letter['q'].setLine("# # #", 3);
    letter['q'].setLine("#####", 4);

    letter['r'].setLine("#####", 0);
    letter['r'].setLine("#   #", 1);
    letter['r'].setLine("#### ", 2);
    letter['r'].setLine("#  ##", 3);
    letter['r'].setLine("#   #", 4);

    letter['s'].setLine("#####", 0);
    letter['s'].setLine("#    ", 1);
    letter['s'].setLine("#####", 2);
    letter['s'].setLine("    #", 3);
    letter['s'].setLine("#####", 4);

    letter['t'].setLine("#####", 0);
    letter['t'].setLine("  #  ", 1);
    letter['t'].setLine("  #  ", 2);
    letter['t'].setLine("  #  ", 3);
    letter['t'].setLine("  #  ", 4);

    letter['u'].setLine("#   #", 0);
    letter['u'].setLine("#   #", 1);
    letter['u'].setLine("#   #", 2);
    letter['u'].setLine("#   #", 3);
    letter['u'].setLine("#####", 4);

    letter['v'].setLine("#   #", 0);
    letter['v'].setLine("#   #", 1);
    letter['v'].setLine("#   #", 2);
    letter['v'].setLine(" # # ", 3);
    letter['v'].setLine("  #  ", 4);

    letter['w'].setLine("#   #", 0);
    letter['w'].setLine("#   #", 1);
    letter['w'].setLine("# # #", 2);
    letter['w'].setLine("## ##", 3);
    letter['w'].setLine("#   #", 4);

    letter['x'].setLine("#   #", 0);
    letter['x'].setLine(" # # ", 1);
    letter['x'].setLine("  #  ", 2);
    letter['x'].setLine(" # # ", 3);
    letter['x'].setLine("#   #", 4);

    letter['y'].setLine("#   #", 0);
    letter['y'].setLine(" # # ", 1);
    letter['y'].setLine("  #  ", 2);
    letter['y'].setLine("  #  ", 3);
    letter['y'].setLine("  #  ", 4);

    letter['z'].setLine("#####", 0);
    letter['z'].setLine("   # ", 1);
    letter['z'].setLine("  #  ", 2);
    letter['z'].setLine(" #   ", 3);
    letter['z'].setLine("#####", 4);

    letter[' '].setLine("     ", 0);
    letter[' '].setLine("     ", 1);
    letter[' '].setLine("     ", 2);
    letter[' '].setLine("     ", 3);
    letter[' '].setLine("     ", 4);

    
    std::string input;

    std::cout << "Please Input Your Name : ";
    std::getline(std::cin, input);
    std::cout << "\n\n";  

    std::transform(input.begin(), input.end(), input.begin(), [](const char& c) { 
        return (isalpha(c) ? tolower(c) : c);  
    });
    
    std::ostringstream oss;

    for (size_t level = 0; level < LETTER_SIZE; ++level) {
        for (const char& c : input) {
            oss << letter[c][level] << ' ';
        }
        oss << std::endl;
    }
    
    std::cout << oss.str();
}
