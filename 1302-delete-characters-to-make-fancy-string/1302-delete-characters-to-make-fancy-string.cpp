class Solution {
public:
    string makeFancyString(string s) {
        string ans = "";
        int cnt = 1;
        char prev = s[0];
        ans += prev;
        for(int i=1; i<s.size(); i++){
            if(s[i] == prev) cnt ++;
            else{
                prev = s[i];
                cnt = 1;
            }
            if(cnt < 3) ans += s[i];
        }
        return ans;
    }
};