// main.cpp
// Driver file for compiling markdown into a structured language.

#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {

    std::ifstream file("../examples/example.md");
    if (!file) {
        std::cerr << "Unable to open file\n";
        return 1;
    }

    std::string line;
    unsigned int lineNumber = 0;
    while (std::getline(file, line)) {
        // @TODO: lex each line
        ++lineNumber;
    }

    // @TODO: parse tokens from lexer

    file.close();

    return 0;
}
