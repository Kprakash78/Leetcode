/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        int reverse = 0;

        while (x != 0) {
            int digit = x % 10;

            // Check for overflow
            if (reverse > INT_MAX / 10 || 
               (reverse == INT_MAX / 10 && digit > INT_MAX % 10))
                return 0;

            // Check for underflow
            if (reverse < INT_MIN / 10 || 
               (reverse == INT_MIN / 10 && digit < INT_MIN % 10))
                return 0;

            reverse = reverse * 10 + digit;
            x /= 10;
        }

        return reverse;
    }
};
// @lc code=end 

