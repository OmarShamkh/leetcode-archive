class Solution {
public:
    int addBits(int num, int bits) {
        int Pos = 0;
        while (bits > 0) {
            while ((num >> Pos) & 1) ++Pos;
            num |= (1 << Pos);
            --bits;
        }
        return num;
    }
    int removeBits(int num, int bits) {
        while (bits > 0) {
            num &= (num - 1);
            --bits;
        }
        return num;
    }
    int minimizeXor(int num1, int num2) {
        int n1 = __builtin_popcount(num1);
        int n2 = __builtin_popcount(num2);

        if(n1 == n2) return num1;
        if (n1 < n2) return addBits(num1, n2 - n1);
        return removeBits(num1, n1-n2);
    }
};