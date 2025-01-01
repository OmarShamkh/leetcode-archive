class Solution {
public:
    int maxScore(string s) {
        int n = s.size();
        int pre[n];
        pre[0] = s[0] == '0' ? 0 : 1;
        for(int i=1; i<n; i++){
            if(s[i] == '1') pre[i] = pre[i-1] + 1;
            else pre[i] = pre[i-1];
        }
        int cnt_0 = 0, cnt_1 = 0, ans = 0;
        for(int i=0; i<n-1; i++){
            if(s[i] == '0') cnt_0++;
            else cnt_1++;
            cout << pre[n-1] - pre[i] << " \n";
            ans = max(ans, cnt_0 + pre[n-1] - pre[i]);
        }
        return ans;
    }
};