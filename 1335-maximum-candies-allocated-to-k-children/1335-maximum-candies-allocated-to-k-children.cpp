class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int maxi = 0;
        for(int i : candies) maxi = max(maxi, i);
        int l = 0, r = maxi;
        int ans = 0;
        while(l < r){
            int mid = r + (l-r) /2;
            if(can(candies, k, mid)){
                l = mid;
            }
            else{
                r = mid-1;
            }
        }
        return l;
    }

    bool can(vector<int>& candies, long long k, int n){
        long long sum = 0;
        for(int i=0; i<candies.size(); i++){
            sum += (candies[i] / n);
        }
        return sum >= k;
    }
};