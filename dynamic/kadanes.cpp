#include <algorithm>
#include <vector>

class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        int current = nums[0];
        int max = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            current = std::max(nums[i],current+nums[i]);
            max = std::max(max,current);
        }
        return max;
    }
};