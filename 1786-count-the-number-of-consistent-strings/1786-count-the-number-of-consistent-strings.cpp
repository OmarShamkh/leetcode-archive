class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<int>frq(26,0);
        for(auto c : allowed) frq[c-'a']++;
        int cnt = 0;
        for(auto w : words){
            bool b = 1;
            for(auto c : w) {
                if(frq[c-'a'] == 0){
                    b = 0;
                    break;
                }
            }
            if(b) cnt++;
        }
        return cnt;
        
    }
};