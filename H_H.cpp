#include<bits/stdc++.h>
using namespace std;
#define ll long long

int solve(int ind,int n,vector<int>&v,vector<bool>&vis,int sum,int *dp){
    if(ind == n){
        return sum;
    }
    if(v[ind]==0){
        return solve(ind +1,n,v,vis,sum,dp);
    }
    int ans = INT32_MAX;
    int presum = sum;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            vis[i] = true;
            // if(dp[ind+1 && (ind != n-1)]!=-1){
            //     sum = abs(ind - i) + dp[ind+1];
            // }else{
                sum = abs(ind - i) + solve(ind+1,n,v,vis,sum,dp);
            //}
            ans = min( ans , sum );
            vis[i] = false;
            sum = presum;
        }
    }
    return dp[ind] = ans;
}


int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    vector<bool>vis(n);
    int dp[n+1] = {-1};
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        vis[i] = v[i];
    }
    //for(auto i:v)cout<<i<<" ";cout<<endl;
    cout<<solve(0,n,v,vis,sum,dp);
    return 0;
}