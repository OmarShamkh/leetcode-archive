class Solution {
public:
    int findKthNumber(int n, int k) {
        int curr = 1;
        k = k - 1;
        while (k > 0) {
            int steps = countPrefix(n, curr, curr + 1);
            if (steps <= k) {
                curr += 1;
                k -= steps;
            } else {
                curr *= 10;
                k -= 1;
            }
        }
        return curr;
    }
    int countPrefix(long n, long x, long y) {
        int steps = 0;
        while (x <= n) {
            steps += min(n + 1, y) - x;
            x *= 10;
            y *= 10;
        }
        return steps;
    }
};