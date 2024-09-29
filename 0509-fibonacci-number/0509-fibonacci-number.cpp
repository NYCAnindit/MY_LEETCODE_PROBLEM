class Solution {
public:
    int fib(int n) {
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        int prev2=1,prev1=0,curr;
        for(int i=0;i<=n;i++)
        {
            curr=prev2+prev1;
            prev2=prev1;
            prev1=curr;
        }
        return prev2;
        
        
    }
};