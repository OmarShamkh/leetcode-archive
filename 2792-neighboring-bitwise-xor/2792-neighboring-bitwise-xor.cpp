class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int sum = 0;
        for(int n : derived) sum ^= n;
        return sum == 0;
    }
};