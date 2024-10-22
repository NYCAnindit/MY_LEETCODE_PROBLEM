class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n =nums.size();
        int currentSum=nums[0];
        int maxSum=nums[0];
        for (int i = 1; i < n; i++) {
        if (nums[i] > nums[i - 1]) {
            currentSum += nums[i];  // Continue ascending
        } else {
            currentSum = nums[i];   // Start a new subarray
        }
        maxSum = max(maxSum, currentSum);  // Update max sum
    }
    
    return maxSum;
    }
};