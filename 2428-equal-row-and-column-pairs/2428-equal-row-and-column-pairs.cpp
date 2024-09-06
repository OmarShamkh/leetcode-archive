class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        vector<vector<int>> rows(grid.size());
        vector<vector<int>> cols(grid.size());
        map<vector<int> , int> frqcol;
        for(int r=0; r<grid.size(); r++){
            for(int c=0; c<grid[r].size(); c++){
                rows[r].push_back(grid[r][c]);
            }
        }
        for(int c=0; c<grid.size(); c++){
            for(int r=0; r<grid[c].size(); r++){
                cols[c].push_back(grid[r][c]);
            }
            frqcol[cols[c]]++;
        }
        int ans = 0;                 
        for(auto x : rows){
            if(frqcol[x]) ans += frqcol[x];
        }
        
        return ans;
    }
};
// 3 1 2 2
// 1 4 4 4
// 2 4 2 2
// 2 5 2 2