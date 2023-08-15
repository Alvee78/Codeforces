#include<bits/stdc++.h>
using namespace std;
#define ll long long

int solve(int n, vector<int> &dp){
    if(n<=1)return n;
    if(dp[n]!=-1)return dp[n];
    return dp[n] = solve(n-1,dp)+solve(n-2,dp);
}

int main(){
    int n=5;
    vector<int>dp(n+1,-1);
    solve(n,dp);
    for(int i=0;i<=n;i++){
        cout<<dp[i]<<" ";
    }
    return 0;
}