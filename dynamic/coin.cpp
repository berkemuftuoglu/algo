#include "imports.h"

int numberOfWaysToMakeChange(int n, vector<int> denoms) {
  if(n==0) return 1;
  else if(n<0 || denoms.empty()) return 0;

  int denom = *denoms.begin();
  vector<int> dw(denoms.begin()+1, denoms.end());
  return numberOfWaysToMakeChange(n - denom, denoms) + numberOfWaysToMakeChange(n,dw);
}


int minNumberOfCoinsForChange(int n, vector<int> denoms) {
  vector<int> dp(n+1, n+1);
  dp[0] = 0;

  for(auto denom: denoms){
    for(size_t i = denom; i <= n; ++i){
      dp[i] = min(dp[i], dp[i-denom] +1);
    }
  }
  return dp.back() == n + 1 ? -1 : dp.back();
}
