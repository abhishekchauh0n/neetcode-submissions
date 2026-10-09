class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> v (n+1, 0);
        for(int i = 0; i <= n; i++){
            int bitCnt = 0, j = i;
            while(j != 0)
            {
                if(j&1)
                    bitCnt += 1;
                j = j>>1;
            }
            v[i] = bitCnt;
        }
        return v;
    }
};
