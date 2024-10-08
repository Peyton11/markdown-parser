// Lexer.hpp
// Takes Markdown input and converts it into a series of tokens.

#ifndef LEXER_HPP
#define LEXER_HPP

#include "Token.hpp"
#include <vector>
#include <string>

class Lexer {

public:
    std::vector<Token> lex(std::string& line);

private:

    std::vector<Token> tokens;
};

#endif
