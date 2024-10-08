// Lexer.hpp
// Takes Markdown input and converts it into a series of tokens.

#ifndef LEXER_HPP
#define LEXER_HPP

#include "Token.hpp"
#include <vector>
#include <string>

class Lexer {

public:
    std::vector<Token> lex(std::string& content);

private:

    // Checks if the line is a level 1 heading in Mardown
    bool isHeading1(std::string& line);

    // Checks if the line is a level 2 heading in Mardown
    bool isHeading2(std::string& line);

    // Checks if the line is a level 3 heading in Mardown
    bool isHeading3(std::string& line);

    // Checks if the line is a level 4 heading in Mardown
    bool isHeading4(std::string& line);

    // Checks if the line is a level 5 heading in Mardown
    bool isHeading5(std::string& line);

    // Checks if the line is a level 6 heading in Mardown
    bool isHeading6(std::string& line);

    std::vector<Token> tokens;
};

#endif
