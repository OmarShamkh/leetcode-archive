class Solution {
public:
    int minAddToMakeValid(string s) {
        int cnt = 0, bad = 0;
        for(auto c : s){
            if(c == '(') cnt++;
            else {
                if(cnt) cnt--;
                else bad++;
            }
        }
        return cnt + bad;
    }
};