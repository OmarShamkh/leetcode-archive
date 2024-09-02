class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(m * n != original.size()) return {};
        vector<vector<int>> result(m , vector<int>(n));
        // int l = 0;
        // for(int i=0; i<m; i++){ 
        //     for(int j=0; j<n; j++){
        //         result[i].push_back(original[l++]);
        //     }
        // }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                result[i][j] = original[i * n + j];
            }
        }
        return result;
    }
};