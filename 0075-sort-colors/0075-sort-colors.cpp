#include <vector>
#include <algorithm>

class Solution {
public:
    void sortColors(std::vector<int>& nums) {
        int n = nums.size();
        
        // Bubble sort approach
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - i - 1; ++j) {
                if (nums[j] > nums[j + 1]) {
                    std::swap(nums[j], nums[j + 1]);
                }
            }
        }
    }
};