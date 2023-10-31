#include "imports.h"


int main() {
    char c;

    // 1. isdigit
    c = '5';
    std::cout << "isdigit('" << c << "'): " << (isdigit(c) ? "true" : "false") << std::endl;

    // 2. isalnum
    c = 'A';
    std::cout << "isalnum('" << c << "'): " << (isalnum(c) ? "true" : "false") << std::endl;

    // 3. islower
    c = 'a';
    std::cout << "islower('" << c << "'): " << (islower(c) ? "true" : "false") << std::endl;

    // 4. isupper
    c = 'B';
    std::cout << "isupper('" << c << "'): " << (isupper(c) ? "true" : "false") << std::endl;

    // 5. isspace
    c = ' ';
    std::cout << "isspace('" << c << "'): " << (isspace(c) ? "true" : "false") << std::endl;

    // 6. isprint
    c = 'C';
    std::cout << "isprint('" << c << "'): " << (isprint(c) ? "true" : "false") << std::endl;

    // 7. ispunct
    c = '.';
    std::cout << "ispunct('" << c << "'): " << (ispunct(c) ? "true" : "false") << std::endl;

    // 8. iscntrl
    c = '\n';
    std::cout << "iscntrl('" << c << "'): " << (iscntrl(c) ? "true" : "false") << std::endl;

    // 9. toupper
    c = 'd';
    std::cout << "toupper('" << c << "'): " << char(toupper(c)) << std::endl;

    //for(char c : s) v[c - 'a']++; // c - 'a' is the index of c in the alphabet, frequency chart

    return 0;
}
