class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int x = rolls.size();
        int sum = 0; int sz = n + x;
        for(int i : rolls) sum += i;
        int num = mean * sz;
        int res = num - sum;
        if(res < n || res > 6*n) return {};
        int d = res/n , m = res%n;
        vector<int> ans(n,d);
        for(int i=0; i<m; i++){
            ans[i]++;
        }
        
        return ans;
    }
};