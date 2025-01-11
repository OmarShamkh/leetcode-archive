class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size() < k) return false;
        int fr[26] = {0};
        for(char c : s){
            fr[c - 'a']++;
        }
        int cnt = 0;
        for(int i=0; i<26; i++){
            if(fr[i] & 1) cnt++;
        }
        if(cnt > k) return false;
        return true;
    }
};