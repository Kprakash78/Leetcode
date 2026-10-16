/*
 * @lc app=leetcode id=81 lang=cpp
 *
 * [81] Search in Rotated Sorted Array II
 */

// @lc code=start
class Solution {
public:
    bool search(vector<int>& nums, int target) {
         int n= nums.size();
        int low =0 , high = n-1;
        while (low<=high)
        {
            int mid = (high+low)/2;

            if (nums[mid]==target)
            {
                return true;
            }
            if (nums[mid]==nums[low])
            {
                low++;
                continue;
            }
            
            if (nums[low]<=nums[mid] )
            {
                if (target>=nums[low] && target< nums[mid])
                {
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }
            else{
                if (target>nums[mid] && target <= nums[high])
                {
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
        }
        return false;
    }
};

// @lc code=end

