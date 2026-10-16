/*
 * @lc app=leetcode id=1482 lang=cpp
 *
 * [1482] Minimum Number of Days to Make m Bouquets
 */

// @lc code=start
class Solution {
public:
    bool possible(vector<int>& arr, int day , int m, int k){
        int n  = arr.size();
        int cnt = 0 , nob = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i]<= day)
            {
               cnt++;
            }
            else{
                 nob += (cnt/k);
                 cnt = 0;
            }
        }
        nob += (cnt/k);

    if (nob >= m)
    {
        return true;
    }
    else{
        return false;
    }
}

int min(vector<int>& arr){
    int n = arr.size();
    int mini = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < mini) {
            mini = arr[i];
        }
    }

    return mini;
}

int max(vector<int>& arr){
    int n = arr.size();
    int maxi = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxi) {
            maxi = arr[i];
        }
    }

    return maxi;
}

    int minDays(vector<int>& bloomDay, int m, int k) {
        int low = min(bloomDay) , high = max(bloomDay);
        int ans= 0;
        while(low <= high){
             int mid = (low + high)/2;
            
             if (possible(bloomDay,mid,m,k)==true)
             {
                ans = mid;
                high = mid-1;
             }
             else{
                low= mid+1;
             }
        }
    return ans;
    }
};
// @lc code=end

