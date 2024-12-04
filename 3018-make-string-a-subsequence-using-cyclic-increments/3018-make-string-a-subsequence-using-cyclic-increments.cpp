class Solution {
    char increment(char c){
        return (c - 'a' + 1) % 26 + 'a';
    }
public:
    bool canMakeSubsequence(string str1, string str2) {
        int l = 0;
        cout << increment('z');
        for(int i=0; i<str1.size(); i++){
            if(l == str2.size()) break;
            if(str1[i] == str2[l] || increment(str1[i]) == str2[l]) l++;
        }
        return l == str2.size();
    }
};