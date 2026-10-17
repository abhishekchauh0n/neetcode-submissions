class Solution {
public:
    int getSum(int a, int b) {
        int sum = 0, carry = 0, i = 0;
        while(i < 32)
        {
            //sumation handling using xor
            sum |= ((a&(1<<i)) ^ (b&(1<<i)) ^ carry<<i);
            //carry handling
            if(carry)
            {
                carry = ((a&(1<<i)) | (b&(1<<i))) ? 1 : 0;
            }
            else
            {
                carry = ((a&(1<<i)) & (b&(1<<i))) ? 1 : 0;
            }
            i++;
        }
        if(carry)
            sum |= carry << i;

        return sum;
    }
};
