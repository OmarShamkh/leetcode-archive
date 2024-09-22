class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        // int cur = 1;
        // for(int i=1; i<=n; i++){
        //     ans.push_back(cur);
        //     if(cur * 10 <= n){
        //         cur *= 10;
        //     }
        //     else{
        //         while(cur%10 ==9 || cur>=n) cur /=10;
        //         cur++;
        //     }
        // }
        for(int i=1; i<10; i++) dfs(n,i,ans);
        return ans;
    }
    void dfs(int n, int cur, vector<int>&ans){
        if(cur > n) return;
        else{
            ans.push_back(cur);
            for(int i=0; i<10; i++){
                if(cur*10+i > n) return;
                dfs(n,cur*10 + i,ans);
            }
        }
    }
};