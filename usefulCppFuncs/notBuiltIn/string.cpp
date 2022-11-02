#include <imports.h>

using namespace std;

class stringFuncs {
public:
/*
Find if two strings are isomorphic, outside the box thinking.
*/
bool isIsomorphic(string s, string t) {
        int m1[129] = {0}, m2[129] = {0}, n = s.size();
        for (int i = 0; i < n; ++i) {
            if (m1[s[i]] != m2[t[i]]) return false;
            m1[s[i]] = i + 1;
            m2[t[i]] = i + 1;
        }
        return true;
}

//slice a string from a delimiter and return in tokens
vector<string> split(string s, char delim) {
    vector<string> tokens;
    stringstream ss(s);
    string token;
    while (getline(ss, token, delim)) {
        tokens.push_back(token);
    }
    return tokens;
}

};