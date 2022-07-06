
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







    

};

