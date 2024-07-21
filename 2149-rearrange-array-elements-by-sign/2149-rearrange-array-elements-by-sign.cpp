class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size());
        int n=nums.size();
        int even =0;
        int odd =1;
        for(int i =0;i<n;i++)
        {
            if(nums[i]>0)
            {
                ans[even]=nums[i];
                even=even+2;
            }
            else{
                ans[odd]=nums[i];
                odd =odd+2;
            }
        }
        return ans;
        
    }
};