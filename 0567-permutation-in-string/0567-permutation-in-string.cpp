class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;

        vector<int>frq1(26,0);
        vector<int>frq2(26,0);
        for(int i=0; i<s1.size();i++){
            frq1[s1[i]-'a']++;
        }
        int l=0, r=0;
        while(r < s2.size()){
            frq2[s2[r]-'a']++;
            if(r-l+1 == s1.size()){
                if(frq1 == frq2) return true;
            }
            if(r-l+1 < s1.size()) r++;
            else{
                frq2[s2[l]-'a']--;
                l++;
                r++;
            }
        }
        return false;
    }
};