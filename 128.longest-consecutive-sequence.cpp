/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      // int cnt=1;
      // int maxi = 1;
      // int n = nums.size();
      // int maxi;
      // sort(nums.begin(),nums.end());
      // for (int i = 1; i < n; i++)
      // {
      //   if (nums[i-1]+1 == nums[i])
      //   {
      //       cnt++;
      //   }
      //   else if (nums[i-1] == nums[i])
      //   {
          
      //   }
        
      //   else{
      //   maxi = max(maxi,cnt);
      //   cnt=1;
      // }  
      // }
      // maxi = max(maxi,cnt);// this is because after loop ends the code never runs again
      // if (nums.size()>0)
      // {
      //    return maxi; 
      // }
      // return 0;
      
        unordered_set<int> st;

        // Store all elements in the set
        for (int x : nums) {
            st.insert(x);
        }

        int longest = 0;

        // Check every element
        for (int x : st) {

            // If x is the start of a sequence
            if (st.find(x - 1) == st.end()) {

                int cnt = 1;
                int curr = x;

                // Count the length of the sequence
                while (st.find(curr + 1) != st.end()) {
                    curr++;
                    cnt++;
                }

                longest = max(longest, cnt);
            }
        }

        return longest;
    }
};
// @lc code=end

