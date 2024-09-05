class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> frq1, frq2;
        for(auto x : nums1) frq1[x]++;
        for(auto x : nums2) frq2[x]++;
        vector<vector<int>> ans(2);
        for(auto x : nums1){
            if(frq2[x] == 0) 
            {
                ans[0].push_back(x);
                frq2[x] = 1;
            }
        }
        for(auto x : nums2){
            if(frq1[x] == 0) 
            {
                ans[1].push_back(x);
                frq1[x] = 1;
            }
        }
        return ans;
    }
};