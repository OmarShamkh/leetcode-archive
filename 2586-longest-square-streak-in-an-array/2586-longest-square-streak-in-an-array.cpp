class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        map<long,long> mp;
        for(int n : nums) mp[n]++;
        sort(nums.begin(), nums.end());
        // 2,3,4,9,16
        int cnt = 0, ans = 0;
        for(int i=0; i<nums.size(); i++){
            long long cur = nums[i];
            while(mp.count(cur)){
                cnt++;
                mp[cur] = 0;
                cur *= cur;
            }
            ans = max(ans, cnt);
            cnt = 0;
        }
        return ans < 2 ? -1 : ans;
    }
};