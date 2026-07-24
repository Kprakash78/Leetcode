/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        int j = n-k;

        vector<int> temp;

        for (int i = j; i < n; i++)
        {
            temp.push_back(nums[i]);
        }

        for (int i = j; i < n; i++)
        {
            nums[i-j] = nums[i];
        }
        
        for (int i = j+1; i < n; i++)
        {
            nums[i] = temp[i-j-1];
        }
        
        
        
    }
};
// @lc code=end

