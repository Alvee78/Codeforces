class Solution {
public:
    #include<bits/stdc++.h>
    int solve(int m,int n,vector<vector<int>>& grid,vector<vector<int>>&dp){
        if(n == 0 && m == 0)return grid[0][0];
        if(n < 0 || m < 0)return 1e9;
        if(dp[m][n] != -1)return dp[m][n];
        int left = grid[m][n] + solve(m,n-1,grid,dp);
        int up = grid[m][n] + solve(m-1,n,grid,dp);
        return dp[m][n] = min(up,left);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        // vector<vector<int>>dp(m,vector<int>(n,-1));
        // return solve(m-1,n-1,grid,dp);
        vector<int>dp(n,1e9),present(n);
        
        for(int i=0; i<m ;i++) {
            for(int j=0 ; j<n ; j++) {
                if(i==0 && j==0)present[0] = grid[0][0];
                else {
                    int left = 1e9;
                    int up = 1e9;
                    if(j>0) left = grid[i][j] + present[j-1];
                    if(i>0) up = grid[i][j] + dp[j];
                    present[j] = min(left,up);
                }
            }
            for(int k=0 ; k<n ; k++) {
                dp[k] = present[k];
            }
        }
        return present[n-1];
    }
};