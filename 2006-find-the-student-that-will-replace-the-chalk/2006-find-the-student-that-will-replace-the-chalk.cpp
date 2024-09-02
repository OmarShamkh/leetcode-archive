class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long sum = 0; int n = chalk.size();
        // sum += chalk[0];
        // vector<long> pre(n);
        // pre[0] = chalk[0];
        for(int i=0; i<n; i++){
            sum += chalk[i];
            // pre[i] = chalk[i] + pre[i-1];
        } 
        long long mod = k % sum;
        if( mod == 0) return 0;
        for(int i=0; i<n; i++){
            // cout << pre[i] << " ";
            if(mod < chalk[i]) return i;
            mod -= chalk[i];
        }
        return 0;
    }
};