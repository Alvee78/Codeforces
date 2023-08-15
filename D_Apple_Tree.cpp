#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<vector<ll>>v;
vector<ll>cnt;

ll dfs(ll parent,ll child){
    ll count=0;
    for(auto cld : v[child]){
        if(cld!=parent)
            count+=dfs(child,cld);
    }
    if(v[child].size()==1 && child!=1){
        count++;
    }
    cnt[child]=count;
    return count;
}

void solve(){
    ll n;
    cin>>n;

    v.resize(n+1);
    cnt.resize(n+1,0);

    for(int i=0;i<n-1;i++){
        int p,c;
        cin>>p>>c;
        v[p].push_back(c);
        v[c].push_back(p);
    }
    dfs(0,1);
    ll q;
    cin>>q;
    for(int i=0;i<q;i++){
        ll a,b;
        cin>>a>>b;
        cout<<cnt[a]*cnt[b]<<endl;
    }
    v.clear();
    cnt.clear();
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}