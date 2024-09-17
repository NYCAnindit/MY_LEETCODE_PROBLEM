class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n =nums.size();
        int count =0 ,start=0, end=0;
        int product=1;
        
        while(end<n)
        {
            product*=nums[end];
            
            while(product>=k && start<=end)
            {
                product/=nums[start];
                start++;
            }
            count+=1+(end-start);
            end++;
        }
        return count;
        
    }
};