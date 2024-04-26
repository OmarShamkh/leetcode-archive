int dx[] = {0,1,-1,0};
int dy[] = {1,0,0,-1};

class Solution {
    
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size() , m = grid[0].size();
        int ans = 0;
        vector<vector<int>> visited (n, vector<int>(m, 0));

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == '1' && visited[i][j] == 0){
                    ans++;
                    dfs(grid, visited, n, m, i, j);
                }
            }
        }
        return ans;
    }

    void dfs(vector<vector<char>>& grid, vector<vector<int>>& visited, int n, int m, int r, int c){
        if(r >= n || c >=m || r<0 || c<0 || visited[r][c]) return;
        visited[r][c] = 1;
        for(int i=0; i<4; i++){
            int newr = r + dx[i];
            int newc = c + dy[i];
            if(newr >=0 && newr<n && newc >=0 && newc < m && grid[newr][newc] == '1' && visited[newr][newc] ==0){
                dfs(grid, visited, n, m, newr, newc);
            }
        }
    }

};