#include <imports.h>

using namespace std;

class Functions{
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
Palindrome
*/
bool isPalindrome(string s) {
    return (s == string(s.rbegin(), s.rend()));
}

/*
Find the intervals where the value is bigger than 0 in a vector
*/
vector<vector<int>> findIntervals(vector<int>& nums) {
    vector<vector<int>> res;
    int n = nums.size();
    int i = 0;
    while (i < n) {
        if (nums[i] > 0) {
            int j = i;
            while (j < n && nums[j] > 0) {
                j++;
            }
            res.push_back({i, j - 1});
            i = j;
        } else {
            i++;
        }
    }
    return res;
}

/*
return if there is a subarrya that adds up to zero
*/
bool zeroSumSubarray(vector<int>& arr) {
    unordered_map<int, int> prefix_sum_counts = {{0,1}};
    int prefix_sum = 0, count = 0;
  
    for (int x : arr) {
        prefix_sum += x;
        count += prefix_sum_counts[prefix_sum]++;
    }
    return count;
}




};
