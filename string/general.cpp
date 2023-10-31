#include "imports.h"

void traverseParagraph(string p){
    isstringstream iss(p);
    while(iss >> word){
        cout << word << endl;
    }

}