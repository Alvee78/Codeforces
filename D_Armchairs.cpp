#include<bits/stdc++.h>
using namespace std;
#define ll long long

int calc(int i, int j,vector<int> &v1, vector<int> &v0, vector<vector<int>> &dp){
    if(i==v1.size()) return 0;
    if(j==v0.size()) return 100000000;

    if(dp[i][j]!=-1) return dp[i][j];
    return dp[i][j] = min(calc(i+1,j+1,v1,v0,dp)+abs(v1[i]-v0[j]),calc(i,j+1,v1,v0,dp));
}


void solve(){
    int n; 
    cin>>n;
    int a[n]; 
    vector<int> index_of_one;
    vector<int> index_of_zero;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]) index_of_one.push_back(i);
        else index_of_zero.push_back(i);
    }
    if(index_of_one.size()==0){cout<<0<<endl; return;}
    vector<vector<int>> dp( index_of_one.size() , vector<int>(index_of_zero.size(),-1)); 
    cout<<calc(0,0,index_of_one,index_of_zero,dp)<<endl;

}

int main(){
    solve();
    return 0;
}