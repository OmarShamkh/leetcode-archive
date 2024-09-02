class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> list;
        vector<int> nums;
        solve(list, nums, k, n);
        return list;
    }

    void solve(vector<vector<int>>& list, vector<int> nums, int k, int n){
        if(nums.size() > k) return;
        if(n == 0 && nums.size() == k){
            list.push_back(nums);
            return;
        }
        int i = nums.size() == 0 ? 1 : nums.back() + 1;
        for(;i<=9; i++){
            // pick
            nums.push_back(i);
            // solve
            solve(list,nums,k,n-i);
            // leave
            nums.pop_back();
        }
    }
};