#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        ll c=0;
        multimap<ll,ll>m;
        ll s;
        for(int i=0;i<n;i++){
            cin>>s;
            m.insert({s,1});
        }
        for(auto i=m.begin();i!=m.end();){
            s=(*i).first;
            m.re
        }
    }
    return 0;
}