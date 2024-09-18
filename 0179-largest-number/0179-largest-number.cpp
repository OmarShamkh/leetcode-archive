class Solution {
public:
    static bool comp(int n1, int n2){
        string s1 = to_string(n1) + to_string(n2);
        string s2 = to_string(n2) + to_string(n1);
        return s1 > s2;
    }
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), comp);
        string ans = "";
        if (nums[0] == 0) return "0";
        for (auto num : nums) {
            ans += to_string(num);
        }
        return ans;
    }
    
};