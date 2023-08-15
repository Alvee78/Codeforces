#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll a,b;
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<pair<ll,ll>> v;
        for(ll i=0;i<n;i++){
            cin>>a>>b;
            v.push_back({b,a});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        // for(auto i:v){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        ll ans=0;
        unordered_map<ll,pair<ll,ll>>m;
        for(ll i=0;i<n;i++){
            if(m[v[i].second].second<v[i].second){
                m[v[i].second].first+=v[i].first;
                m[v[i].second].second++;
            }
        }
        for(auto i:m){
            ans+=i.second.first;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}