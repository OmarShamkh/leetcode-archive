class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>fr(A.size()+1,0) , pre(A.size());
        int cnt = 0;
        for(int i=0; i<A.size(); i++){
            if(++fr[A[i]] == 2) ++cnt;
            if(++fr[B[i]] == 2) ++cnt;
            pre[i] = cnt;
        }
        return pre;
    }
};