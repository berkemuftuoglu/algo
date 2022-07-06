
/*
Built-in useful functions for interview questions

Author: Berke Muftuoglu
*/
#include <imports.h>

using namespace std;

class Functions{
public:
    int main(){ }

/*
SWAP()
*/
void swapExample(){
    int a = 5, b = 10;
    swap(a,b);
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




    

};

