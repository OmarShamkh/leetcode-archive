class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int mp[82];
        memset(mp, -1, sizeof(mp));
        int ans = -1;
        for(int num : nums){
            int s = SumOfDigits(num);
            if(mp[s] != -1){
                ans = max(ans, mp[s] + num);
            }
            mp[s] = max(mp[s], num);
        }
        return ans;
    }

    int SumOfDigits(int x){
        int sum = 0;
        while(x){
            sum += x % 10;
            x /= 10;
        }
        return sum;
    }
};