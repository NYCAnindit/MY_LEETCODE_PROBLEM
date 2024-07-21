class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n =nums.size();//numer the size of array
       int insertposition =0;//take the first number 
        for(int i=0;i<n;i++)//iteration 
        {
            if(nums[i]!=0)//ager nums ka value zero nahi hua 
            {
            nums[insertposition] =nums[i]; //insert the value in num and increase the value 
            insertposition++;
            }
        }
        while(insertposition< n)
        {
            nums[insertposition++]=0;
        }
    }
};