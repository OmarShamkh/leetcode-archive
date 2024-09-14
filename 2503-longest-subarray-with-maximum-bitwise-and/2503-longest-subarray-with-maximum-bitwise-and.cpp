class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans = 0 , cnt = 0;
        int maxn = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > maxn){
                maxn = nums[i];
                ans = 0;
                cnt = 0;
            }
            if(maxn == nums[i]){
                cnt++;
            }
            else{
                cnt = 0;
            }
            ans = max(ans, cnt);
        }
        return ans;
    }
};