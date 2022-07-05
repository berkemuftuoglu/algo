/*
COUNT()
count the numbers in an array
*/
#include <algorithm>
#include <vector>
#include <iostream>
#include <set>
using namespace std;

class Functions{
public:

//size of an array
int sizeOfAnArray(int *arr){
    size_t res = sizeof(arr)/sizeof(*arr);
    return res;

    // or #define sizeArr(arr) sizeof(arr)/sizeof(*arr)
}

// size of an array
bool containsDuplicate(vector<int>& a) {
        set<int> s(a.begin(), a.end());
        return s.size() != a.size();
    }

// move all occurrences of n to the end of the array
void moveElemToEnd(vector<int>& nums, int n) {
    int j = 0;
    // move all the nonzero elements advance
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != n) {
            nums[j] = nums[i];
            j++;
        }
    }
    for (;j < nums.size(); j++) {
            nums[j] = n;
    }
}  






};
