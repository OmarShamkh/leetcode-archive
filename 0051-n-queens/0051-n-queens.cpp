class Solution {
bool vis_col[20], dig1[30], dig2[30];
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> queens(n , string(n, '.'));
        
        solve(res,queens,0,n);
        return res;
    }

    void solve(vector<vector<string>>& res,vector<string>& queens, int row, int n){
        if(row == n){
            res.push_back(queens);
            return;
        }

        for(int col=0; col<n; col++){
            if(queens[row][col] == 'Q' || vis_col[col] || dig1[row-col+9] || dig2[row+col])
                continue;

            //pick
            queens[row][col] = 'Q';
            vis_col[col] = true;
            dig1[row-col+9] = true;
            dig2[row+col] = true;
            solve(res, queens, row+1, n);

            //leave
            queens[row][col] = '.';
            vis_col[col] = false;
            dig1[row-col+9] = false;
            dig2[row+col] = false;
        }
    }

};