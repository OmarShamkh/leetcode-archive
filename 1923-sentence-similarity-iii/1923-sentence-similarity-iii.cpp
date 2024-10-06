class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        if(sentence1 == sentence2) return true;

        vector<string>words1 , words2;
        for(int i=0; i<sentence1.size(); i++){
            string w = "";
            while(i < sentence1.size() && sentence1[i] != ' '){
                w += sentence1[i];
                i++;
            }
            words1.push_back(w);
        }
        for(int i=0; i<sentence2.size(); i++){
            string w = "";
            while(i < sentence2.size() && sentence2[i] != ' '){
                w += sentence2[i];
                i++;
            }
            words2.push_back(w);
        }
        int l1=0, l2=0, r1=words1.size()-1, r2=words2.size()-1;
        while(l1<=r1 && l2<=r2){
            if(words1[l1] == words2[l2]){
                l1++;
                l2++;
            }
            else if(words1[r1] == words2[r2]){
                r1--;
                r2--;
            }
            else return false;
        }
        return true;
    }
};