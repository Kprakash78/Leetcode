/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(int x : nums){
            if (st.find(x) != st.end())
            {
                return true;
            }
            st.insert(x);
        }
    return false;
    }
};
// @lc code=end

