class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int cnt = 0;
        for(int i=0; i<words.size(); i++){
            for(int j=i+1; j<words.size(); j++){
                cout << words[i] << " " << words[j] << endl;
                if (isPrefixAndSuffix(words[i], words[j])) cnt++;
            }
        }
        return cnt;
    }
    bool isPrefix(string str, string prefix) {
        if (prefix.length() > str.length()) return false;
        return str.substr(0, prefix.length()) == prefix;
    }
    bool isSuffix(string str, string suffix) {
        if (suffix.length() > str.length()) return false;
        return str.substr(str.length() - suffix.length()) == suffix;
    }
    bool isPrefixAndSuffix(string i, string j){
        return isPrefix(j,i) == true && isSuffix(j,i) == true;
    }
};