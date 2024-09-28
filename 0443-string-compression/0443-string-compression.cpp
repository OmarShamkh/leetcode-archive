class Solution {
public:
    int compress(vector<char>& chars) {
        int ans = 0;
        for(int i=0; i<chars.size();){
            char curr = chars[i];
            int cnt = 0;
            while(i<chars.size() && curr == chars[i]){
                cnt++;
                i++;
            }
            chars[ans++] = curr;
            if(cnt > 1){
                for(auto c : to_string(cnt)) chars[ans++] = c;
            }
        }
        return ans;
    }
};