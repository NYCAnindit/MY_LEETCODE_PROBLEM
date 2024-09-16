class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int, int>m;
        m[0]=1;
        int prifixsum=0;
        int total=0;
        
        for(int i =0;i<n;i++)
        {
            prifixsum+=nums[i];
            if(m.count(prifixsum-k))
            {
                total+=m[prifixsum-k];
                m[prifixsum]++;
            }
            else{
                m[prifixsum]++;
            }
        }
        return total;
        
    }
};