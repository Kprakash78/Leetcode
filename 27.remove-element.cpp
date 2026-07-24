/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
    //     vector<int> store;
    //     for( int x : nums){
    //         if (x != val)
    //         {
    //             store.push_back(x);   
    //         }
    //     }
    //     for (int i = 0; i < store.size(); i++)
    //     {
    //         nums[i]=store[i];
    //     }
    // return store.size() ;
    int k =0;
        for(int x : nums){
            if (x != val)
            {
                nums[k] = x;
                k++;
            }
         
    }
    return k;  
    }
};
// @lc code=end

