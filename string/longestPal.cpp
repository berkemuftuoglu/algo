
#include "imports.h"

using namespace std;


int expandAroundCenter(string s, int left, int right) {
    while (left >= 0 && right < s.size() && s[left] == s[right]) {
        left--;
        right++;
    }
    return right - left - 1;
}

string longestPalindromicSubstring(string s) {
  // Write your code here.
    int start = 0, end = 0;
    for (size_t i = 0; i < s.size(); i++) {
        int len = max(expandAroundCenter(s, i, i), expandAroundCenter(s, i, i + 1));
        if (len > end - start) {
            start = i - (len - 1) / 2;
            end = i + len / 2;
        }
    }
    return s.substr(start, end - start + 1);
}