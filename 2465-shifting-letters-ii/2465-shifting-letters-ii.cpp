class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int>pre(n+1,0);
        for(auto x : shifts){
            int l = x[0], r = x[1], d = x[2];
            if(d == 1){
                pre[l] += 1;
                pre[r+1] -= 1;
            }
            else{
                pre[l] -= 1;
                pre[r+1] += 1;
            }
        }
        for(int i=1; i<n; i++){
            pre[i] = pre[i] + pre[i-1];
        }
        for(int i=0; i<n; i++){
            char cur = s[i];
            int shift = pre[i] % 26;
            if(shift < 0) shift += 26;
            s[i] = 'a' + (cur - 'a' + shift) % 26;
        }
        return s;
    }
};