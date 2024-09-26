class Solution {
    
public:
    int findMin(vector<int>& nums) {
      int n =nums.size();
        int start=0, mid;
        int end=n-1;
        int ans=nums[0];
        
        while(start<=end)
        {
            mid=end+(start-end)/2;
            
            if(nums[mid]>=nums[0])
                start=mid+1;
            else{
                ans=nums[mid];
                end=mid-1;
            }
        }
        return ans;
    }
};