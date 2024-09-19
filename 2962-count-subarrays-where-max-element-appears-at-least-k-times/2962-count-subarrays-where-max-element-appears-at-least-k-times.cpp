class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int max_element=0;
        int n =nums.size();
        for(int i =0;i<n;i++)
        {
            max_element=max(max_element,nums[i]);
        }
        
        int start=0 , end=0;
        long total=0;
        int count=0;
        
        while(end<n)
        {
            if(nums[end]==max_element)
                count++;
            while(count==k)
            {
                total+=n-end;
                if(nums[start]==max_element)
                {
                    count--;
                    
                }
                start++;
                
            }
            end++;
        }
        return total;
    }
};