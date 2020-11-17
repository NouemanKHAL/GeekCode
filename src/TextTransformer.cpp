#include "TextTransformer.hpp"

TextTransformer::TextTransformer() {
    init();
}

TextTransformer& TextTransformer::getInstance() {
    static TextTransformer textTf{};
    return textTf;
}

std::string TextTransformer::transformWord(const std::string & word) {
    std::ostringstream oss;

    for (size_t level = 0; level < constants::kCharacterSize; ++level) {
        for (const char& c : word) {
            oss << character[c][level] << ' ';
        }
        oss << std::endl;
    }
    
    return oss.str();
}

std::string TextTransformer::get(std::string::iterator first1, std::string::iterator last1) {
    std::ostringstream oss;
    std::string buff;

    while (first1 != last1) {
        if (*first1 == '\n') {
            if (!buff.empty()) {
                oss << transformWord(buff) << std::endl << std::endl;
                buff.clear();
            } else {
                oss << std::endl << std::endl;
            }
        }
        else {
            buff.push_back(tolower(*first1));
        }
        ++first1;
    }

    if (!buff.empty()) {
        oss << transformWord(buff) << std::endl;
        buff.clear();
    }

    return oss.str();
}

void TextTransformer::init() {
    character['a'].setLine("$$$$$", 0);
    character['a'].setLine("$   $", 1);
    character['a'].setLine("$$$$$", 2);
    character['a'].setLine("$   $", 3);
    character['a'].setLine("$   $", 4);

    character['b'].setLine("$$$$$", 0);
    character['b'].setLine("$   $", 1);
    character['b'].setLine("$$$$ ", 2);
    character['b'].setLine("$   $", 3);
    character['b'].setLine("$$$$$", 4);

    character['c'].setLine("$$$$$", 0);
    character['c'].setLine("$    ", 1);
    character['c'].setLine("$    ", 2);
    character['c'].setLine("$    ", 3);
    character['c'].setLine("$$$$$", 4);

    character['d'].setLine("$$$$$", 0);
    character['d'].setLine("$   $", 1);
    character['d'].setLine("$   $", 2);
    character['d'].setLine("$   $", 3);
    character['d'].setLine("$$$$$", 4);

    character['e'].setLine("$$$$$", 0);
    character['e'].setLine("$    ", 1);
    character['e'].setLine("$$$$$", 2);
    character['e'].setLine("$    ", 3);
    character['e'].setLine("$$$$$", 4);

    character['f'].setLine("$$$$$", 0);
    character['f'].setLine("$    ", 1);
    character['f'].setLine("$$$$$", 2);
    character['f'].setLine("$    ", 3);
    character['f'].setLine("$    ", 4);

    character['g'].setLine("$$$$$", 0);
    character['g'].setLine("$    ", 1);
    character['g'].setLine("$ $$$", 2);
    character['g'].setLine("$   $", 3);
    character['g'].setLine("$$$$$", 4);

    character['h'].setLine("$   $", 0);
    character['h'].setLine("$   $", 1);
    character['h'].setLine("$$$$$", 2);
    character['h'].setLine("$   $", 3);
    character['h'].setLine("$   $", 4);

    character['i'].setLine("$$$$$", 0);
    character['i'].setLine("  $  ", 1);
    character['i'].setLine("  $  ", 2);
    character['i'].setLine("  $  ", 3);
    character['i'].setLine("$$$$$", 4);

    character['j'].setLine("$$$$$", 0);
    character['j'].setLine("    $", 1);
    character['j'].setLine("    $", 2);
    character['j'].setLine("$   $", 3);
    character['j'].setLine("$$$$$", 4);

    character['k'].setLine("$   $", 0);
    character['k'].setLine("$  $ ", 1);
    character['k'].setLine("$$$  ", 2);
    character['k'].setLine("$  $ ", 3);
    character['k'].setLine("$   $", 4);

    character['l'].setLine("$    ", 0);
    character['l'].setLine("$    ", 1);
    character['l'].setLine("$    ", 2);
    character['l'].setLine("$    ", 3);
    character['l'].setLine("$$$$$", 4);

    character['m'].setLine("$   $", 0);
    character['m'].setLine("$$ $$", 1);
    character['m'].setLine("$ $ $", 2);
    character['m'].setLine("$   $", 3);
    character['m'].setLine("$   $", 4);

    character['n'].setLine("$   $", 0);
    character['n'].setLine("$$  $", 1);
    character['n'].setLine("$ $ $", 2);
    character['n'].setLine("$  $$", 3);
    character['n'].setLine("$   $", 4);

    character['o'].setLine("$$$$$", 0);
    character['o'].setLine("$   $", 1);
    character['o'].setLine("$   $", 2);
    character['o'].setLine("$   $", 3);
    character['o'].setLine("$$$$$", 4);

    character['p'].setLine("$$$$$", 0);
    character['p'].setLine("$   $", 1);
    character['p'].setLine("$$$$$", 2);
    character['p'].setLine("$    ", 3);
    character['p'].setLine("$    ", 4);

    character['q'].setLine("$$$$$", 0);
    character['q'].setLine("$   $", 1);
    character['q'].setLine("$   $", 2);
    character['q'].setLine("$ $ $", 3);
    character['q'].setLine("$$$$$", 4);

    character['r'].setLine("$$$$$", 0);
    character['r'].setLine("$   $", 1);
    character['r'].setLine("$$$$ ", 2);
    character['r'].setLine("$  $$", 3);
    character['r'].setLine("$   $", 4);

    character['s'].setLine("$$$$$", 0);
    character['s'].setLine("$    ", 1);
    character['s'].setLine("$$$$$", 2);
    character['s'].setLine("    $", 3);
    character['s'].setLine("$$$$$", 4);

    character['t'].setLine("$$$$$", 0);
    character['t'].setLine("  $  ", 1);
    character['t'].setLine("  $  ", 2);
    character['t'].setLine("  $  ", 3);
    character['t'].setLine("  $  ", 4);

    character['u'].setLine("$   $", 0);
    character['u'].setLine("$   $", 1);
    character['u'].setLine("$   $", 2);
    character['u'].setLine("$   $", 3);
    character['u'].setLine("$$$$$", 4);

    character['v'].setLine("$   $", 0);
    character['v'].setLine("$   $", 1);
    character['v'].setLine("$   $", 2);
    character['v'].setLine(" $ $ ", 3);
    character['v'].setLine("  $  ", 4);

    character['w'].setLine("$   $", 0);
    character['w'].setLine("$   $", 1);
    character['w'].setLine("$ $ $", 2);
    character['w'].setLine("$$ $$", 3);
    character['w'].setLine("$   $", 4);

    character['x'].setLine("$   $", 0);
    character['x'].setLine(" $ $ ", 1);
    character['x'].setLine("  $  ", 2);
    character['x'].setLine(" $ $ ", 3);
    character['x'].setLine("$   $", 4);

    character['y'].setLine("$   $", 0);
    character['y'].setLine(" $ $ ", 1);
    character['y'].setLine("  $  ", 2);
    character['y'].setLine("  $  ", 3);
    character['y'].setLine("  $  ", 4);

    character['z'].setLine("$$$$$", 0);
    character['z'].setLine("   $ ", 1);
    character['z'].setLine("  $  ", 2);
    character['z'].setLine(" $   ", 3);
    character['z'].setLine("$$$$$", 4);

    character[' '].setLine("  ", 0);
    character[' '].setLine("  ", 1);
    character[' '].setLine("  ", 2);
    character[' '].setLine("  ", 3);
    character[' '].setLine("  ", 4);

    character[','].setLine("    ", 0);
    character[','].setLine("    ", 1);
    character[','].setLine("    ", 2);
    character[','].setLine(" $$ ", 3);
    character[','].setLine("  $ ", 4);

    character[';'].setLine("    ", 0);
    character[';'].setLine(" $$ ", 1);
    character[';'].setLine("    ", 2);
    character[';'].setLine(" $$ ", 3);
    character[';'].setLine("  $ ", 4);

    character['.'].setLine("   ", 0);
    character['.'].setLine("   ", 1);
    character['.'].setLine("   ", 2);
    character['.'].setLine("   ", 3);
    character['.'].setLine(" $ ", 4);

    character[':'].setLine("   ", 0);
    character[':'].setLine(" $ ", 1);
    character[':'].setLine("   ", 2);
    character[':'].setLine(" $ ", 3);
    character[':'].setLine("   ", 4);

    character['!'].setLine(" $  ", 0);
    character['!'].setLine(" $  ", 1);
    character['!'].setLine(" $  ", 2);
    character['!'].setLine("    ", 3);
    character['!'].setLine(" $  ", 4);

    character['?'].setLine(" $$$$$ ", 0);
    character['?'].setLine(" $   $ ", 1);
    character['?'].setLine("   $$  ", 2);
    character['?'].setLine("       ", 3);
    character['?'].setLine("   $   ", 4);

    character['('].setLine("  $ ", 0);
    character['('].setLine(" $  ", 1);
    character['('].setLine(" $  ", 2);
    character['('].setLine(" $  ", 3);
    character['('].setLine("  $ ", 4);

    character[')'].setLine(" $  ", 0);
    character[')'].setLine("  $ ", 1);
    character[')'].setLine("  $ ", 2);
    character[')'].setLine("  $ ", 3);
    character[')'].setLine(" $  ", 4);

    character['['].setLine(" $$ ", 0);
    character['['].setLine(" $  ", 1);
    character['['].setLine(" $  ", 2);
    character['['].setLine(" $  ", 3);
    character['['].setLine(" $$ ", 4);

    character[']'].setLine(" $$ ", 0);
    character[']'].setLine("  $ ", 1);
    character[']'].setLine("  $ ", 2);
    character[']'].setLine("  $ ", 3);
    character[']'].setLine(" $$ ", 4);

    character['{'].setLine("  $$ ", 0);
    character['{'].setLine("  $  ", 1);
    character['{'].setLine(" $$  ", 2);
    character['{'].setLine("  $  ", 3);
    character['{'].setLine("  $$ ", 4);

    character['}'].setLine(" $$  ", 0);
    character['}'].setLine("  $  ", 1);
    character['}'].setLine("  $$ ", 2);
    character['}'].setLine("  $  ", 3);
    character['}'].setLine(" $$  ", 4);

    character['/'].setLine("     $ ", 0);
    character['/'].setLine("    $  ", 1);
    character['/'].setLine("   $   ", 2);
    character['/'].setLine("  $    ", 3);
    character['/'].setLine(" $     ", 4);

    character['\\'].setLine(" $     ", 0);
    character['\\'].setLine("  $    ", 1);
    character['\\'].setLine("   $   ", 2);
    character['\\'].setLine("    $  ", 3);
    character['\\'].setLine("     $ ", 4);

    character['_'].setLine("     ", 0);
    character['_'].setLine("     ", 1);
    character['_'].setLine("     ", 2);
    character['_'].setLine("     ", 3);
    character['_'].setLine(" $$$ ", 4);

    character['-'].setLine("     ", 0);
    character['-'].setLine("     ", 1);
    character['-'].setLine(" $$$ ", 2);
    character['-'].setLine("     ", 3);
    character['-'].setLine("     ", 4);

    character['+'].setLine("       ", 0);
    character['+'].setLine("   $   ", 1);
    character['+'].setLine(" $$$$$ ", 2);
    character['+'].setLine("   $   ", 3);
    character['+'].setLine("       ", 4);

    character['$'].setLine("$$$$$ ", 0);
    character['$'].setLine("$ |   ", 1);
    character['$'].setLine("$$$$$ ", 2);
    character['$'].setLine("  | $ ", 3);
    character['$'].setLine("$$$$$ ", 4);

    character['<'].setLine("   $ ", 0);
    character['<'].setLine("  $  ", 1);
    character['<'].setLine(" $   ", 2);
    character['<'].setLine("  $  ", 3);
    character['<'].setLine("   $ ", 4);

    character['>'].setLine(" $   ", 0);
    character['>'].setLine("  $  ", 1);
    character['>'].setLine("   $ ", 2);
    character['>'].setLine("  $  ", 3);
    character['>'].setLine(" $   ", 4);

    character['='].setLine("       ", 0);
    character['='].setLine(" $$$$$ ", 1);
    character['='].setLine("       ", 2);
    character['='].setLine(" $$$$$ ", 3);
    character['='].setLine("       ", 4);

    character['#'].setLine("  $  $ ", 0);
    character['#'].setLine("$$$$$$ ", 1);
    character['#'].setLine(" $  $  ", 2);
    character['#'].setLine("$$$$$$ ", 3);
    character['#'].setLine("$  $   ", 4);

    character['*'].setLine(" $   $  ", 0);
    character['*'].setLine("  $ $   ", 1);
    character['*'].setLine("$$$$$$$ ", 2);
    character['*'].setLine("  $ $   ", 3);
    character['*'].setLine(" $   $  ", 4);

    character['\''].setLine(" $ ", 0);
    character['\''].setLine(" $ ", 1);
    character['\''].setLine("   ", 2);
    character['\''].setLine("   ", 3);
    character['\''].setLine("   ", 4);

    character['"'].setLine(" $ $ ", 0);
    character['"'].setLine(" $ $ ", 1);
    character['"'].setLine("     ", 2);
    character['"'].setLine("     ", 3);
    character['"'].setLine("     ", 4);

    character['0'].setLine("$$$$$", 0);
    character['0'].setLine("$   $", 1);
    character['0'].setLine("$   $", 2);
    character['0'].setLine("$   $", 3);
    character['0'].setLine("$$$$$", 4);

    character['1'].setLine("  $  ", 0);
    character['1'].setLine(" $$  ", 1);
    character['1'].setLine("  $  ", 2);
    character['1'].setLine("  $  ", 3);
    character['1'].setLine(" $$$ ", 4);

    character['2'].setLine(" $$$ ", 0);
    character['2'].setLine("   $ ", 1);
    character['2'].setLine(" $$$ ", 2);
    character['2'].setLine(" $   ", 3);
    character['2'].setLine(" $$$ ", 4);

    character['3'].setLine(" $$$ ", 0);
    character['3'].setLine("   $ ", 1);
    character['3'].setLine(" $$$ ", 2);
    character['3'].setLine("   $ ", 3);
    character['3'].setLine(" $$$ ", 4);

    character['4'].setLine(" $  $", 0);
    character['4'].setLine(" $  $", 1);
    character['4'].setLine(" $$$$", 2);
    character['4'].setLine("    $", 3);
    character['4'].setLine("    $", 4);

    character['5'].setLine(" $$$ ", 0);
    character['5'].setLine(" $   ", 1);
    character['5'].setLine(" $$$ ", 2);
    character['5'].setLine("   $ ", 3);
    character['5'].setLine(" $$$ ", 4);

    character['6'].setLine(" $$$ ", 0);
    character['6'].setLine(" $   ", 1);
    character['6'].setLine(" $$$ ", 2);
    character['6'].setLine(" $ $ ", 3);
    character['6'].setLine(" $$$ ", 4);

    character['7'].setLine(" $$$ ", 0);
    character['7'].setLine("   $ ", 1);
    character['7'].setLine("   $ ", 2);
    character['7'].setLine("   $ ", 3);
    character['7'].setLine("   $ ", 4);

    character['8'].setLine(" $$$ ", 0);
    character['8'].setLine(" $ $ ", 1);
    character['8'].setLine(" $$$ ", 2);
    character['8'].setLine(" $ $ ", 3);
    character['8'].setLine(" $$$ ", 4);

    character['9'].setLine(" $$$ ", 0);
    character['9'].setLine(" $ $ ", 1);
    character['9'].setLine(" $$$ ", 2);
    character['9'].setLine("   $ ", 3);
    character['9'].setLine(" $$$ ", 4);
}

