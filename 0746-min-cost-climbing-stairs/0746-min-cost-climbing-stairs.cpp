class Solution {
public:
    // Helper function to calculate the minimum cost to reach the top
    int ways(int n, vector<int>& cost, vector<int>& dp) {
        // Base cases
        if (n <= 1) return cost[n];
        
        // If already calculated, return the stored value
        if (dp[n] != -1) return dp[n];
        
        // Recursive case: take the minimum of the two previous steps
        dp[n] = cost[n] + min(ways(n - 1, cost, dp), ways(n - 2, cost, dp));
        
        return dp[n];
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n + 1, -1); // DP array for memoization
        
        // Since you can start from either the last or second-last step, take the minimum of the two
        return min(ways(n - 1, cost, dp), ways(n - 2, cost, dp));
    }
};
