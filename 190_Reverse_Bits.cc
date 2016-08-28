class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result=0;
        uint32_t tmp1=0;
        uint32_t tmp2=0;
        uint32_t tmp3=0;
        for(uint32_t i=0;i<32;++i){
            tmp1=n>>i;
            tmp2=tmp1&1;
            tmp3=result<<1;
            result=tmp3|tmp2;
        }
        return result;
    }
};
