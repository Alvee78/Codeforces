#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n+1);
        
        for(int i=1;i<=n;i++){
            ll x;
            cin>>x;
            v[x]=i;
        }
        if(v[n]>v[1] && v[n]>v[2]){
            cout<<v[n]<<" "<<max(v[1],v[2])<<endl;
        }else if(v[n]<v[1] && v[n]<v[2]){
            cout<<v[n]<<" "<<min(v[1],v[2])<<endl;
        }else cout<<v[n]<<" "<<v[n]<<endl;
    }
    return 0;
}