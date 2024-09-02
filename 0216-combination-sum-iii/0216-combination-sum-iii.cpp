class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> list;
        vector<int> nums;
        solve(list, nums, 1, k, n);
        return list;
    }

    void solve(vector<vector<int>>& list, vector<int> nums,int start ,int k, int n){
        if(nums.size() > k) return;
        if(n == 0 && nums.size() == k){
            list.push_back(nums);
            return;
        }
        for(int i=start; i<=9; i++){
            // pick
            nums.push_back(i);
            // solve
            solve(list,nums, i+1, k,n-i);
            // leave
            nums.pop_back();
        }
    }
};