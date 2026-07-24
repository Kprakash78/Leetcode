/*
 * @lc app=leetcode id=2395 lang=cpp
 *
 * [2395] Find Subarrays With Equal Sum
 */

// @lc code=start
class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_set<int> st;
        int n = nums.size();
        for (int i = 0; i < n-1; i++)
        {
           int sum = nums[i] + nums[i+1];
           if (st.find(sum) != st.end())
           {
            return true;
           }
           st.insert(sum); 
        }
        return false;
    }
};
// @lc code=end

