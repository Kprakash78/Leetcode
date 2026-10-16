/*
 * @lc app=leetcode id=875 lang=cpp
 *
 * [875] Koko Eating Bananas
 */

// @lc code=start
class Solution {
public:
    int findmax(vector<int>& piles){
        int n= piles.size();
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            maxi = max(maxi , piles[i]);
        }
        return maxi;
    }
   long long calculate_hours(vector<int>& piles, int hour){
        int n = piles.size();
        long long total_hours = 0;
        for (int i = 0; i < n; i++)
        {
            total_hours += ceil((double)piles[i]/(double)hour);
        }
        return total_hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {

        int low =1 , high = findmax(piles);
        int n = piles.size();

        while (low <= high)
        {
            int mid = (low + high)/2;
            long long total_h = calculate_hours(piles , mid);
            if (total_h<=h)
            {
               high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};
// @lc code=end

