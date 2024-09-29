class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int result=0;
        for(int i=0;i<32;i++)
        
        {
            int lsb= n&1;
            int reverlsb=lsb<<(31-i);
            result=result|reverlsb;
            n=n>>1;
        }
        return result;
        
    }
};