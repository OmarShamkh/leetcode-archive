class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        set<string>ans;
        for(int i=0; i<words.size(); i++){
            for(int j=0; j<words.size(); j++){
                if(i==j) continue;
                
                if(words[i] > words[j]){
                    if(words[i].find(words[j]) != string::npos){
                        ans.insert(words[j]);
                    }
                    else if(words[j].find(words[i]) != string::npos){
                        ans.insert(words[i]);
                    }
                }
            }
        }
        vector<string>anss;
        for(auto s : ans) anss.push_back(s);
        return anss;
    }
};