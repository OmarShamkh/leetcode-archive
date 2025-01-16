class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        int ans1 = 0, ans2 = 0;
        if(m&1){
            for(int x : nums1){
                ans1 ^= x;
            }
        }
        if(n&1){
            for(int x : nums2){
                ans2 ^= x;
            }
        }
        return ans1 ^ ans2;
    }
};