#include<bits/stdc++.h>
using namespace std;
#define ll long long

int solveUsingTabulation(int idx,vector<int> &heights,int *dp){
    dp[0] = 0;
    for(int i=1;i<=idx;i++){
        int fs = dp[i-1] + abs (heights[i-1] - heights[i]);
        int ss = INT32_MAX;
        if(i>1){
            ss = dp[i-2] + abs (heights[i - 2] - heights[i]);
        }
        dp[i] = min(fs,ss);
    }
    return dp[idx];
}
//memorization
int solve(int idx,vector<int> &heights,int *dp){
    if(idx == 0){
        return 0;
    }
    if(dp[idx != -1]){
        return dp[idx];
    }
    int right = solve(idx-1,heights,dp) + abs (heights[idx] - heights[idx-1]);
    int left = INT32_MAX;
    if(idx>1){
        left = solve(idx-2,heights,dp) + abs (heights[idx] - heights[idx-2]);
    }
    return dp[idx] = min(right,left);
}

int frogJump(int n, vector<int> &heights)
{
    int dp[n] = {-1};
    int ans = solve(n-1,heights,dp);
    int ans = solveUsingTabulation(n-1,heights,dp);
    return ans;
}

int main(){
    
    return 0;
}