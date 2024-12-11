class Solution {
    int solve(vector<int>& arr, int target){
        int l = 0, r = arr.size()-1 , ans = 0;
        while(l <= r){
            int mid = l + (r-l)/2;
            if(arr[mid] <= target){
                ans = mid;
                l = mid+1;
            }
            else{
                r = mid -1;
            }
        }
        return ans;
    }
public:
    int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        for(int i=0; i<nums.size(); i++){
            int j = solve(nums, nums[i]+2*k);
            ans = max(ans, j-i+1);
        }
        return ans;
    }
};