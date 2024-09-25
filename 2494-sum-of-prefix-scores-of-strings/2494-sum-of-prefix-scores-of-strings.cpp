struct Trie {
    public:
        Trie* next[26] = {};
        int cnt = 0;
};
class Solution {
public:
    vector<int> sumPrefixScores(vector<string>& words) {
        Trie root;
        vector<int> ans;
        for(string w : words){
            auto node = &root;
            for(char c : w){
                auto val = c - 'a';
                if(!node->next[val]){
                    node->next[val] = new Trie();
                }
                node->next[val]->cnt++;
                node = node->next[val];
            }
        }
        for(string w : words){
            auto node = &root;
            int count = 0;
            for(char c : w){
                count += node->next[c-'a']->cnt;
                node = node->next[c-'a'];
            }
            ans.push_back(count);
        }
        return ans;
    }
};