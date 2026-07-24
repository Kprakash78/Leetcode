class Solution {
public:
        void swap(int &a , int &b){
                    int temp = a;
                    a = b;
                    b = temp;
                } 
     void moveZeroes(vector<int>& nums) {
     int n = nums.size();

     int j =-1;

     for (int i = 0; i < n; i++)
     {
        if (nums[i]==0)
        {
            j=i;
            break;
        }
        
     }
     if (j == -1)
    {
        return ;
    }
     for (int i = j+1; i < n; i++)
     {
        if (nums[i] != 0)
        {
            swap(nums[i],nums[j]);
            j++;
        }
        
     }
     
     
    
    // vector<int> temp;
    // for (int i = 0; i < n; i++)
    // {
    //     if (nums[i]!=0)
    //     {
    //         temp.push_back(nums[i]);
    //     }        
    // }
    // int space = temp.size();
    // for (int i = 0; i < space; i++)
    // {
    //     nums[i]=temp[i];
    // }
    // for (int i = space; i < n; i++)
    // {
    //     nums[i]=0;
    // }
     }

};