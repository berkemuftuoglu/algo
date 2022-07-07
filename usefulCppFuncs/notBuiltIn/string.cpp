#include <imports.h>

class string {
public:
/*
Find if two strings are isomorphic, outside the box thinking.
*/
bool isIsomorphic(string s, string t) {
    //hash tables for characters from our strings
    int sind[129] = {0}, tind[129] = {0};
      
  for(int i = 0; i < s.size(); i++){
    //if previous characters have different position
    if(sind[s[i]] != tind[t[i]]){
        return false;
    }
    //put last position of characters
    sind[s[i]] = tind[t[i]] = i+1;                       
    }
      return true;
}
};