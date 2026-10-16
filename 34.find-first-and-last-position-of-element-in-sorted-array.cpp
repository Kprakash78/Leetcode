/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
class Solution {
public:
    int lowerbound(vector<int>& nums, int target){
        int n = nums.size();
        int low =0; int high = n-1; int first = -1;
        while (low <= high)
        {
            int mid = (low + high)/2;

            if (nums[mid]>=target)
            {
                first = mid;
                high = mid-1;
            }
            low = mid+1;
        }
        return first;
    }
    int upperbound(vector<int>& nums, int target){
       int n = nums.size();
       int low =0; int high = n-1; int last = -1; 
       while (low <= high)
       {
            int mid = (low + high)/2;

            if (nums[mid]>target)
            {
                last = mid;
                high = mid-1;
            }
            low = mid+1;
       }
       return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
    int n = nums.size();
    vector<int> v1;
    int lb = lowerbound(nums , target);
    if (lb == n || nums[lb] != target)
    {
        v1.push_back(-1);
        v1.push_back(-1);
        return v1;
    }
    else{
        v1.push_back(lb);
        v1.push_back(upperbound(nums,target)-1);
        return v1;
    }

    
    }
};
// @lc code=end

