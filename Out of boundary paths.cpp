class Solution {
public:
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        const int MOD=1000000007;
        vector<vector<vector<int>>> dp(maxMove+1,vector<vector<int>>(m,vector<int>(n,0)));
        dp[0][startRow][startColumn] = 1;
        int count=0;
        for (int moves=1; moves<=maxMove; ++moves) {
            for (int row=0; row<m; ++row) {
                for (int col=0; col<n; ++col) {
                    if (row>0) dp[moves][row][col]=(dp[moves][row][col]+dp[moves-1][row-1][col])%MOD;
                    if (row<m-1) dp[moves][row][col]=(dp[moves][row][col]+dp[moves-11][row+1][col])%MOD;
                    if (col>0) dp[moves][row][col]=(dp[moves][row][col]+dp[moves-1][row][col-1])%MOD;
                    if (col<n-1) dp[moves][row][col]=(dp[moves][row][col]+dp[moves-1][row][col+1])%MOD;
                    if (row==0) count=(count+dp[moves-1][row][col]) % MOD;
                    if (row==m-1) count=(count+dp[moves-1][row][col]) % MOD;
                    if (col==0) count=(count+dp[moves-1][row][col]) % MOD;
                    if (col==n-1) count=(count+dp[moves-1][row][col]) % MOD;
                }
            }
        }
       return count;
    }
};
