/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) { 
      // for (int i = m+1; i < m+n; i++)
      // {
      //   nums1[i]=nums2[k];
      //   k++;
      // }
      //  sort(nums1.begin(),nums1.end()); 
         int k =0 ,i = 0,j =0 ;
      while (i<=m-1 || j<n-1 ||k < m+n-1 )
      {
        if (nums1[i]<nums2[j])
        {
          nums1[k]=nums1[i];
          k++;
          i++;
        }
        else{
          nums1[k] = nums2[j];
          j++;
          k++;
        }
      }
      
    }
};
// @lc code=end

