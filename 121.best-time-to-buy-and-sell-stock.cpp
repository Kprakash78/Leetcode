/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int n = prices.size();
     int max_pro =0 ,mini = prices[0] , pro =0;
        for (int i = 0; i < n; i++)
        {
           mini = min(mini,prices[i]);
           pro = prices[i]-mini;
           max_pro= max(max_pro,pro);
        }
    return max_pro;
    }
};
// @lc code=end

