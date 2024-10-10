class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int ans = 0, n = nums.size();
        vector<int> maxR(n);
        maxR[n-1] = nums[n-1];
        for(int i=n-2; i>=0; i--){
            maxR[i] = max(maxR[i+1], nums[i]);
        }
        int l = 0, r=0;
        while(r < n){
            while(l < r && nums[l] > maxR[r]) l++;
            ans = max(ans, r - l);
            r++;
        }
        return ans;
    }
};