class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        for(int x : arr) mp[(x%k + k) %k]++;

        for(int i=1; i<=k/2; i++){
            if(mp[i] != mp[k-i]) return false;
        }
        if(mp[0] % 2 != 0) return false;
        return true;
    }
};