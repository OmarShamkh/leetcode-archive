class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(int n : nums) pq.push(n);
        long long ans = 0;
        while(k--){
            int maxi = pq.top();
            ans += maxi;
            pq.pop();
            pq.push(ceil(maxi/3.0));
        }
        return ans;
    }
};