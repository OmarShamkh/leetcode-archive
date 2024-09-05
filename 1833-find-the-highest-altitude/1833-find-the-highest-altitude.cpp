class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int>pre(n+1);
        pre[0] = 0;
        for(int i=0; i<n; i++){
            pre[i+1] = pre[i] + gain[i];
        }
        int maxi = INT_MIN;
        for(auto x : pre){
            if(x > maxi) maxi = x;
        }
        return maxi;
    }
};