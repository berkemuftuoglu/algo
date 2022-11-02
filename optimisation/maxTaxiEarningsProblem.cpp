#include "imports.h"

class TaxiProblem {
public:

    int maxTaxiEarnings(int n, vector<vector<int>>& rides) {
        sort(rides.begin(), rides.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1]; 
        }); // sort by end time

        // dp[i] = max earnings from rides ending at i
        vector<long> dp(n + 1);
        for (int i = 1, j = 0; i <= n; ++i) {
            dp[i] = dp[i - 1];
            while (j < rides.size() && rides[j][1] == i) {
                dp[i] = max(dp[i], dp[rides[j][0]] + rides[j][1] - rides[j][0] + rides[j][2]); // dp[rides[j][0]] + ride duration + tip
                ++j;
            }
        }
        return dp[n];
    }

    int numDiffrentIntegers(string word) {
        unordered_set<string> s;
        string num;
        for (char c : word) {
            if (isdigit(c)) {
                num += c;
            } else {
                if (!num.empty()) {
                    s.insert(num);
                    num.clear();
                }
            }
        }
        if (!num.empty()) {
            s.insert(num);
        }
        return s.size();
    }
};