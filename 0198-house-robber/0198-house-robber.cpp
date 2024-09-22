class Solution {
public:
    int Rob(int index, vector<int>& nums, vector<int>& dp) {
        // Base cases
        if (index == 0)
            return nums[0];
        if (index == 1)
            return max(nums[0], nums[1]);
        
        // If the result is already calculated, return it
        if (dp[index] != -1)
            return dp[index];
        
        // Calculate the result and store it in dp
        dp[index] = max(nums[index] + Rob(index - 2, nums, dp), Rob(index - 1, nums, dp));
        return dp[index];
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> dp(n, -1);
        return Rob(n - 1, nums, dp);
    }
};
