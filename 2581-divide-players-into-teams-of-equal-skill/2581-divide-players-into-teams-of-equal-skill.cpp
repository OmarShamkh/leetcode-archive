class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n = skill.size();
        sort(skill.begin(), skill.end());
        int l = 0, r = n-1;
        int p = skill[l] + skill[r];
        int cnt = 0;
        long long ans = 0;
        while(l < r){
            if(skill[l] + skill[r] == p){
                ans += skill[l] * skill[r];
                cnt++;
            }
            l++, r--;
        }

        if(cnt == n/2){
            return ans;
        }
        return -1;
    }
};