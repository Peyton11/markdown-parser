// Token.cpp
// Structure of Markdown tokens. Each token represents a meaningful chunk, like a header, a bold section, a list item, etc.

#include "Token.hpp"
#include <string>

Token::Token(Type type, std::string& value, unsigned int lineNumber)
    : type(type), value(value), lineNumber(lineNumber) {}

// Constructor with only type
Token::Token(Type type)
    : type(type) {}
