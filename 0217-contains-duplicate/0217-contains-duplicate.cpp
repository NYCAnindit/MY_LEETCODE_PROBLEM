class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       set<int>s(nums.begin(),nums.end());
        int n =nums.size();
        int y=s.size();
        if(n==y)
        {
            return false;
        }
        else{
            return true;
        }
        
    }
};