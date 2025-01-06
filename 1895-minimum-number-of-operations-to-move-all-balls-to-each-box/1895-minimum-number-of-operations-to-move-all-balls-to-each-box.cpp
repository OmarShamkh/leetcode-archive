class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> ones;
        for(int i=0; i<n; i++){
            if(boxes[i] == '1'){
                ones.push_back(i);
            }
        }
        for(auto i : ones) cout << i << ' ';
        vector<int>ans(n,0);
        for(int i=0; i<n; i++){
            for(int j=0; j<ones.size(); j++){
                ans[i] += abs(ones[j] - i);
            }
        }
        return ans;
    }
};