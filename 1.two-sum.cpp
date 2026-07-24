/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // unordered_map<int,int> mp;
         int n =nums.size();
        // for (int i = 0; i < n; i++)
        // {
        //     int need = target - nums[i];
        //     if (mp.find(need) != mp.end())
        //     {
        //         return {i , mp[need]};
        //     }
        //     mp[nums[i]]=i;
        // }
        int i =0;
        int j = n-1;
        sort(nums.begin(), nums.end());
        while (i<j)
        {
            int sum = nums[i]+nums[j];
            if ((sum)>target)
            {
                j--;
            }
           else if ((sum)<target)
            {
               i++;
            }
            else{
                return {i,j};
            }
            
        }
        
        return {};    
        
    }
};
// @lc code=end

