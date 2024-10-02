class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> tmp;
        tmp = arr;
        sort(tmp.begin(), tmp.end());
        map<int,int>mp;
        int rank = 1;
        for(int i=0; i<tmp.size(); i++){
            if(i>0 && tmp[i]>tmp[i-1]) rank++;
            mp[tmp[i]] = rank;
        }
        vector<int>ans(arr.size());
        for(int i=0; i<arr.size(); i++){
            ans[i] = mp[arr[i]];
        }
        return ans;
    }
};