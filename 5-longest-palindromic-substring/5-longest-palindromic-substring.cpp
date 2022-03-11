class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int maxlen = 0, st = 0;
        bool dp[n][n];
        memset(dp, 0, sizeof(dp));        
        for(int i=n-1; i>=0; i--){
            for(int j=i; j<n; j++){
                if(s[i] == s[j] && (j-i<2 || dp[i+1][j-1])){
                    dp[i][j] = true;
                    if(j-i+1 > maxlen){
                        st = i;
                        maxlen = j-i+1;
                    }
                }
            }
        }
        return s.substr(st, maxlen);
    }
};