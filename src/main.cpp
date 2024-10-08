// main.cpp
// Driver file for compiling markdown into a structured language.

#include "Token.hpp"
#include "Lexer.hpp"
#include "Parser.hpp"
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

int main(int argc, char* argv[]) {

    std::ifstream file("../examples/example.md");
    if (!file) {
        std::cerr << "Unable to open file\n";
        return 1;
    }

    // Read Markdown file into a string
    std::stringstream buffer;
    buffer << file.rdbuf();
    std::string content = buffer.str();

    Lexer lexer;
    Parser parser;

    std::vector<Token> tokens = lexer.lex(content);
    // @TODO: parse tokens from lexer

    file.close();

    return 0;
}
