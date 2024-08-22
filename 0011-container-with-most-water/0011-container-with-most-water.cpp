class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left =0;
        int right=n-1;
        int max_h=0;
        while(left<right)
        {
            int left_h=height[left];
            int right_h=height[right];
            int min_h=min(left_h,right_h);
            max_h=max(max_h,min_h*(right-left));
            if(left_h<right_h)
            {
                left++;
            }
            else{
                right--;
            }
        }
        return max_h;
        
       
        
        
    }
};