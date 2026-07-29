/*
 * @lc app=leetcode id=560 lang=cpp
 *
 * [560] Subarray Sum Equals K
 */

// @lc code=start
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0, cnt = 0;
        // unoredered_map<int ,int> mp;
        // for (int i = 0; i < n; i++)
        // {
        //     sum += nums[i];
        //     if (mp.find(sum-k)!=mp.end())
        //     {
        //         cnt ++;
        //     }
            
        //     mp[sum]++;
        // }
        // return cnt;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                int sum = 0;
                sum += nums[j];
                if (sum == k)
                {
                    cnt++;

                }
                
            }
            
        }
        return cnt;
    }
};
// @lc code=end

