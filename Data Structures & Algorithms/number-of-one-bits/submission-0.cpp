class Solution {
public:
    int hammingWeight(uint32_t n) {
        int bitCnt = 0;
        while(n != 0)
        {
            if(n&1)
                bitCnt += 1;
            n = n>>1;
        }
        return bitCnt;
    }
};
