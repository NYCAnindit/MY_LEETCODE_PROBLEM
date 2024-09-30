class Solution {
public:
    // Helper function to find the length of the longest increasing subsequence.
    int count(vector<int>& nums, int prev, int curr, vector<vector<int>>& dp) {
        int n = nums.size();
        
        // Base case: when curr reaches the end of the array.
        if (curr == n) {
            return 0;
        }
        
        // If the result is already computed, return the stored value.
        if (dp[curr][prev + 1] != -1) {
            return dp[curr][prev + 1];
        }

        // Option 1: Take the current element if it is greater than the previous one.
        int take = 0;
        if (prev == -1 || nums[curr] > nums[prev]) {
            take = 1 + count(nums, curr, curr + 1, dp);
        }

        // Option 2: Skip the current element.
        int nottake = count(nums, prev, curr + 1, dp);

        // Store the result in the dp array and return the maximum of both options.
        dp[curr][prev + 1] = max(take, nottake);
        return dp[curr][prev + 1];
    }

    // Main function to find length of the longest increasing subsequence.
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        
        // DP table initialized to -1, representing uncomputed results.
        vector<vector<int>> dp(n, vector<int>(n + 1, -1));
        
        // Call the helper function starting from index 0 and with prev = -1 (no element chosen yet).
        return count(nums, -1, 0, dp);
    }
};
