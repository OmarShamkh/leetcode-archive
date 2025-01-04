class Solution {
public:
    int countPalindromicSubsequence(string s) {
        // b b c b a b a
        // a a b c a
        vector<int> l_chars = vector(26, -1);
        vector<int> r_chars = vector(26, -1);
        for(int i=0; i<s.size(); i++){
            if(l_chars[s[i] - 'a'] == -1) l_chars[s[i] - 'a'] = i;
            r_chars[s[i] - 'a'] = i;
        }
        int ans = 0;
        for(int i=0; i<26; i++){
            if(l_chars[i] == -1) continue;
            unordered_set<char> middle;
            for(int j=l_chars[i]+1; j<r_chars[i]; j++){
                middle.insert(s[j]);
            }
            ans += middle.size();
        }
        return ans;
    }
};