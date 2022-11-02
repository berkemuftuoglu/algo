#include "imports.h"

class polishNotation
{
    private:
    vector<string> tokens;

    public:
    /*
    Evaluate reverse polish notation
    */
    int evalRPN() {
        stack<int> s;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/") {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                if (tokens[i] == "+") {
                    s.push(b + a);
                } else if (tokens[i] == "-") {
                    s.push(b - a);
                } else if (tokens[i] == "*") {
                    s.push(b * a);
                } else if (tokens[i] == "/") {
                    s.push(b / a);
                }
            } else {
                s.push(stoi(tokens[i]));
            }
        }
        return s.top();
    }
};
