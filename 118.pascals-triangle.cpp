/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */

// @lc code=start
class Solution {
public:
    vector<int> genraterow(int row){
        long long ans =1;
        vector<int> answer;
        answer.push_back(1);
        for (int i = 1; i <= row; i++)
        {
           ans *= (row-i+1);
           ans /= i;
           answer.push_back(ans);
        }
        return answer;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i = 0; i < numRows; i++)
        {
            ans.push_back(genraterow(i));
        }
        return ans;
    }
};
// @lc code=end

