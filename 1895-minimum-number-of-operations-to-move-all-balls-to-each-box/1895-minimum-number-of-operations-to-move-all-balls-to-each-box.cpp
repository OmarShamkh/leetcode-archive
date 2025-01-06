class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> ans(n,0);
        int pre = 0, cnt = 0;
        for(int i=0; i<n; i++){
            ans[i] += pre;
            if(boxes[i] == '1') cnt++;
            pre += cnt;

        }
        int suff = 0;
        cnt = 0;
        for(int i=n-1; i>=0; i--){
            ans[i] += suff;
            if(boxes[i] == '1') cnt++;
            suff += cnt;
        }
        return ans;
    }
};