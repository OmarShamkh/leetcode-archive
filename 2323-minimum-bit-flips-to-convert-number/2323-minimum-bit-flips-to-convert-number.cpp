class Solution {
public:
    int minBitFlips(int start, int goal) {
        return count_ones(start^goal);
    }
    int count_ones(int n){
        int cnt = 0;
        while(n){
            n &= (n - 1);
            cnt++;
        }
        return cnt;
    }
};