/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        vector<int> hash;
        for(int x : nums){
            hash[x]++;
        }
        for (int i = 0; i <hash[0]+1; i++)
        {
            nums[i]=0;
        }
        for (int i = hash[0]; i < hash[1]+1 ; i++)
        {
            nums[i]=1;
        }
        for (int i = hash[1]; i < n; i++)
        {
            nums[i]=2;
        }
        
        
    }
};
// @lc code=end

