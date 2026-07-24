/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
    if (x>=0)
    {    
        int temp = x;
        int palindrome =0;
        while(temp != 0){
            int digit = temp%10;
            palindrome = palindrome*10 +digit;
            temp = temp/10;
        }
        if (palindrome == x)
        {
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
  }
};
// @lc code=end

