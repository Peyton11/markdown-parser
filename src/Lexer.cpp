// Lexer.hpp
// Takes Markdown input and converts it into a series of tokens.

#include "Lexer.hpp"
#include "Token.hpp"
#include <string>
#include <vector>

// Lexes Markdown text into tokens. Returns a vector of tokens at the end
std::vector<Token> Lexer::lex(std::string& content) {
    // PLACEHOLDER
    std::vector<Token> temp;
    return temp;
}

// Checks if the line is a level 1 heading in Mardown
bool Lexer::isHeading1(std::string& line) {
    return (line[0] == '#' && line[1] == ' ');
}

// Checks if the line is a level 2 heading in Mardown
bool Lexer::isHeading2(std::string& line) {
    return (line[0] == '#' && line[1] == '#' && line[2] == ' ');
}

// Checks if the line is a level 3 heading in Mardown
bool Lexer::isHeading3(std::string& line) {
    return (line[0] == '#' && line[1] == '#' && line[2] == '#' && line[3] == ' ');
}

// Checks if the line is a level 4 heading in Mardown
bool Lexer::isHeading4(std::string& line) {
    return (line[0] == '#' && line[1] == '#' && line[2] == '#' && line[3] == '#' && line[4] == ' ');
}

// Checks if the line is a level 5 heading in Mardown
bool Lexer::isHeading5(std::string& line) {
    return (line[0] == '#' && line[1] == '#' && line[2] == '#' && line[3] == '#' && line[4] == '#' && line[5] == ' ');
}

// Checks if the line is a level 6 heading in Mardown
bool Lexer::isHeading6(std::string& line) {
    return (line[0] == '#' && line [1] == '#' && line[2] == '#' && line[3] == '#' && line[4] == '#' && line[5] == '#' && line[6] == ' ');
}
