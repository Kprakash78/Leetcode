/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // int n = nums.size();
        // unordered_map<long,int> mp;
        
        // for(int x : nums){
        //     mp[x]++;
        // }
        // for(int x : nums){
        //     if (mp[x]==1)
        //     {
        //         return x;
        //     }
            
        // }
        // return -1;
        int ans = 0;

        for (int x : nums) {
            ans ^= x;
        }

        return ans;
    }
};
// @lc code=end

