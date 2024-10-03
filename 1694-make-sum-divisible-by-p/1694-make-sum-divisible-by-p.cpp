class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        map<int,int> mp;        
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum = (sum + nums[i]) % p;
        }
        if(sum % p == 0) return 0;
        int ans = nums.size();
        int cur_sum = 0, need = 0;
        mp[0] = -1;
        for(int i=0; i<nums.size(); i++){
            cur_sum = (cur_sum + nums[i]) % p;
            int want = (cur_sum%p - sum + p) % p;
            if(mp.find(want)!=mp.end()){
                ans = min(ans, i-mp[want]);
            }
            mp[cur_sum%p] = i;
        }
        return ans == nums.size() ? -1 : ans;

    }
};