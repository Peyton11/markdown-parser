// Token.hpp
// Structure of Markdown tokens. Each token represents a meaningful chunk, like a header, a bold section, a list item, etc.

#ifndef TOKEN_HPP
#define TOKEN_HPP

#include <string>

class Token {

private:

    enum Type {
        heading1,
        heading2,
        heading3,
        heading4,
        heading5,
        heading6,
        paragraph,
        lineBreak,
        bold,
        italic,
        blockQuote,
        orderedListItem,
        unorderedListItem,
        image,
        codeBlock,
        horizontalRule,
        link,
        endOfFile
    };

    // token's type
    Type type;

    // token's value (e.g. heading/paragraph values, code in a codeBlock)
    std::string value = "";

    // Line where token was encountered
    unsigned int lineNumber = 0;

public:

    // Constructor
    Token(Type type, std::string& value, unsigned int lineNumber);

    // Constructor with only type
    Token(Type type);
};

#endif
