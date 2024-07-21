class Solution {
    
public:
    void sortColors(vector<int>& nums) {
        int l =0;
        int n =nums.size();
        int h=n-1;
        int m=0;
        while(m<=h)
        {
            int x =nums[m];
            if(x==0)
            {
                swap(nums[l],nums[m]);
                l++;
                m++;
                    
            }
            else if(x==1)
            {
               m++;
            }
            else{
                swap(nums[m],nums[h]);
                h--;
            }
        }

        
    }
};