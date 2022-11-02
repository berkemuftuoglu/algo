#include <imports.h>

class Vector{
public:
//size of an array
int sizeOfAnArray(int *arr){
    size_t res = sizeof(arr)/sizeof(*arr);
    return res;

    // or #define sizeArr(arr) sizeof(arr)/sizeof(*arr)
}

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

/*
Muliply a vector with itself
*/
vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    int left = 1, right = 1;
    vector<int> result(n, 1);
        
    for(int i = 0; i<n; i++){
        result[i] *= left;
        result[n-1-i] *= right;
        left *= nums[i];
        right *= nums[n-1-i];
    }
        
    return result;
}

/*
Permutate a vector
*/
vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
        
    sort(nums.begin(), nums.end());
    do {
        ans.push_back(nums);
    } while(next_permutation(nums.begin(), nums.end())); 
    return ans;
}

/*
Compare if two vectors are values are equal
*/
bool compare(vector<int>& a, vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}







};