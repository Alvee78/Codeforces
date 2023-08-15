#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll ans;
void solve(ll idx,ll n,vector<bool>&vis,ll sum){
    //cout<<idx;

    if(idx==n){
        if(ans<sum)ans=sum;
        return;
    }
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            vis[i]=true;
             sum+=(idx+1)*i;
            solve(idx+1,n,vis,sum);
            sum-=(idx+1)*i;
            vis[i]=false;
        }
    }
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        ll sum=0;
        ans=INT64_MIN;
        cin>>n;
        vector<bool>vis(n+1,false);
        solve(0,n,vis,sum);
        cout<<ans<<endl;
    }
    return 0;
}