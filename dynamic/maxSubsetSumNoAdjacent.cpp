#include "imports.h"

int maxSubsetSumNoAdjacent(vector<int> arr) {
  if(!arr.size()) return 0;
  if(arr.size() == 1) return arr[0];

  auto it = arr.begin() + 1;
  while(it != arr.end()){
    *it = max(*(it-1), *it + *(it-2));
    it++;
  }
  
  return *arr.rbegin();
}