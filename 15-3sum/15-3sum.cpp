class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        
        for(int i=0;i<n; i++){
            if ((i>0) && (nums[i]==nums[i-1]))
                continue;
            int l = i+1, r = n-1;
            while (l<r) {
                int sum = nums[i]+nums[l]+nums[r];
                if(sum>0) r--;
                else if(sum<0) l++;
                else{
                    vector<int>v{nums[i], nums[l], nums[r]};
                    ans.push_back(v);
                    while(l+1 < n && nums[l]==nums[l+1]) l++;
                    while(r-1 > 0 && nums[r]==nums[r-1]) r--;
                    l++; r--;
                }
            }
        }
        
        return ans;
    }
};