class Solution {
public:
    int minFlips(int a, int b, int c) {
        return count_ones(c ^ (a|b)) + count_ones(a &b & ~c);
    }
    int count_ones(int n){
        int cnt = 0;
        while(n){
            cnt += n&1;
            n >>= 1;
        }
        return cnt;
    }
};