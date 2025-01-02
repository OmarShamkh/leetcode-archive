class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        // 1 1 2 3 4 
        unordered_set<char> vowels = {'a', 'e', 'o', 'u', 'i'};
        int n = words.size();
        vector<int> pre(n);
        string s = words[0];
        if (vowels.find(s[0]) != vowels.end() && vowels.find(s[s.size()-1]) != vowels.end()){
            pre[0] = 1;
        }
        else pre[0] = 0;
        for(int i=1; i<words.size(); i++){
            string s = words[i];
            if (vowels.find(s[0]) != vowels.end() && vowels.find(s[s.size()-1]) != vowels.end()){
                pre[i] = pre[i-1] + 1;
            }
            else pre[i] = pre[i-1];
        }
        for(int i : pre) cout << i << " ";
        vector<int>ans(queries.size());
        for(int i=0; i<queries.size(); i++){
            vector<int> cur = queries[i];
            ans[i] = pre[cur[1]] - (cur[0] == 0 ? 0 : pre[cur[0] -1]);
        }
        return ans;
    }
};