/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    int k = 0;
    for (int i = 1; i < n; i++)
    {
        if (nums[k] != nums[i])
        {
           nums[k+1]=nums[i];
           k=i;
        }
        
    }
    return nums;

    }
};
// @lc code=end

