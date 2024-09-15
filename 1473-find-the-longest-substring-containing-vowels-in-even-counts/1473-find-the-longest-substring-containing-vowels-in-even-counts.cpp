class Solution {
public:
    int findTheLongestSubstring(string s) {
        map<int, int> mp;
        mp.insert({0, -1});
        int ans = 0, cur = 0;
        for (int i = 0; i < s.length(); i++) {
            auto n = string("aeiou").find(s[i]);
            if (n != string::npos) cur ^= 1 << n;
            if (!mp.count(cur)) mp[cur] = i;
            ans = max(ans, i - mp[cur]);
        }
        return ans;
    }
    
};