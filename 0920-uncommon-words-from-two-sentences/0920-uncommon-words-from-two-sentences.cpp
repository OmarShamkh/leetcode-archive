class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string,int>freq;
        auto v1 = process(s1);
        auto v2 = process(s2);
        for(auto w : v1){
            freq[w]++;
        }
        for(auto w : v2){
            freq[w]++;
        }
        vector<string>ans;
        for(auto i : freq){
            // cout << i.first << " "<< i.second;
            if(i.second == 1) ans.push_back(i.first);
        }
        return ans;
    }
    vector<string> process(string s){
        vector<string>ans;
        for(int i=0; i<s.size(); i++){
            string w = "";
            while(i < s.size() && s[i] != ' '){
                w += s[i++];
            }
            ans.push_back(w);
        }
        return ans;
    }
};