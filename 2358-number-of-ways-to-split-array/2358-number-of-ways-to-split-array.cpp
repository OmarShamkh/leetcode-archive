class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        // 10 4 -8 7 
        // 10 14 6 13
        long long pre[nums.size()];
        pre[0] = nums[0];
        for(int i=1; i<nums.size(); i++){
            pre[i] = pre[i-1] + nums[i];
        }
        int cnt = 0;
        int r = nums.size()-1;
        for(int i=0; i<r; i++){
            if(pre[i] >= (pre[r] - pre[i])) cnt++;
        }
        return cnt;
    }
};