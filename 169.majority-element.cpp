/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n =nums.size();
        unordered_map<int,int> mp;
        for(int x : nums){
            mp[x]++;
        }
        for (int i = 0; i < n; i++)
        {
           if (mp[nums[i]]>n/2)
           {
            return nums[i];
           }
           
        }
        return -1;
    }
};
// @lc code=end

