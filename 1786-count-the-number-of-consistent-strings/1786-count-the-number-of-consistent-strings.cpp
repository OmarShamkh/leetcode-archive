class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char,int>frq;
        for(auto c : allowed) frq[c]++;
        int cnt = 0;
        for(auto w : words){
            bool b = 1;
            for(auto c : w) {
                if(frq[c] == 0) b = 0;
            }
            if(b) cnt++;
        }
        return cnt;
        
    }
};