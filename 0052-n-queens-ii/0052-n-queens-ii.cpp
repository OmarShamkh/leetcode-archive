class Solution {
bool vis_col[20], dig1[30], dig2[30];
int solve(vector<string>& queens, int row, int n){
    int cnt = 0;
    if(row == n){
        return 1;
    }
    for(int col =0; col<n; col++){

        if(queens[row][col] == 'Q' || vis_col[col] || dig1[row-col+9] || dig2[row+col])
            continue;

        //pick
        queens[row][col] = 'Q';
        vis_col[col] = true;
        dig1[row-col+9] = true;
        dig2[row+col] = true;
        cnt += solve(queens, row+1, n);

        //leave
        queens[row][col] = '.';
        vis_col[col] = false;
        dig1[row-col+9] = false;
        dig2[row+col] = false;
    }

    return cnt;
}
public:
    int totalNQueens(int n) {
        vector<string> queens(n , string(n, '.'));
        int ans = solve(queens, 0, n);
        return ans;
    }
};