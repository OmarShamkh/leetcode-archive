class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans = "";
        ans.reserve(s.size() + spaces.size());
        int idx = 0;
        for(int i=0; i<s.size(); i++){
            if(idx < spaces.size() && i == spaces[idx]){
                ans += ' ';
                ++idx;
            }
            ans += s[i];
        }
        return ans;
    }
};