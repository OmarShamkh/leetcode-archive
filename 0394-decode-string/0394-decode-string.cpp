class Solution {
public:
    string decodeString(string s) {
        stack<string>chars;
        stack<int> nums;
        string res;
        int n = 0;
        for(int i=0; i<s.size(); i++){
            if(is_number(s[i])){
                n = n*10 + s[i]-'0';
            }
            else if(s[i] == '['){
                chars.push(res);
                nums.push(n);
                res = "";
                n = 0;
            }
            else if(s[i] == ']'){
                string tmp = res;
                for(int i=0; i<nums.top()-1; i++){
                    res += tmp;
                }
                res = chars.top() + res;
                chars.pop();
                nums.pop();
            }
            else{
                res.push_back(s[i]);
            }
            
        }
        return res;
    }
    bool is_number(char c){
        return c >= '0' && c <= '9';
    }
};