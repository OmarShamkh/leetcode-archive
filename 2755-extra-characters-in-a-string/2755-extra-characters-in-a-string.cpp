class Solution {
public:
    map<string, int> words;
    int solve(string& s, int idx, vector<int>&dp){
        if(idx == s.size()) return 0;
        int extra = INT_MAX;
        if(dp[idx]!= -1) return dp[idx];

        extra = 1 + solve(s,idx+1,dp);
        string sub = "";
        for(int i=idx; i<s.size(); i++){
            sub += s[i];
            if(words[sub]){
                cout << "ss";
                extra = min(extra, solve(s,i+1,dp));
            }
        }
        return dp[idx] = extra;
    }
    int minExtraChar(string s, vector<string>& dictionary) {
        for(auto w : dictionary) words[w]++;
        vector<int>dp(s.size(),-1);
        int ans = solve(s,0,dp);
        return ans;
    }
};