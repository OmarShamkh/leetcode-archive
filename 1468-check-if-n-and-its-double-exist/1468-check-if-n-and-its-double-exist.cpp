class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        map<int,int> mp;
        for(int x : arr){
            if(mp.find(x*2) != mp.end()) return true;
            if(x%2==0 && mp.find(x/2) != mp.end()) return true;
            mp[x]++;
        }
        return false;
    }
};