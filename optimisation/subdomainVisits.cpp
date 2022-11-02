#include "imports.h"

class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string, int> count;
        for (auto cd : cpdomains) {
            //extracting the number
            int i = cd.find(" ");
            int times = stoi(cd.substr (0, i));
            
            //extracting the domain
            string domain = cd.substr (i + 1);
            
            for (int i = 0; i < domain.size(); ++i){
                if (domain[i] == '.'){
                      count[domain.substr(i + 1)] += times;                  
                }
            }
            
            count[domain] += times;
        }
        
        //transfering from map to vector
        vector<string> res;
        for (auto k : count)
            res.push_back (to_string(k.second) + " " + k.first);
        return res;
    }
};