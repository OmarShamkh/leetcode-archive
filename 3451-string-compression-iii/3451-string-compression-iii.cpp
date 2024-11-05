class Solution {
public:
    string compressedString(string word) {
        string ans = "";
        int idx = 0;
        while(idx < word.size()){
            char cur = word[idx];
            int cnt = 0;
            while(idx < word.size() && word[idx] == cur && cnt<9){
                cnt++;
                idx++;
            }
            ans += to_string(cnt) + cur;
        }
        return ans;
    }
};