#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll a[n+1],s;
        vector<ll>last(k+1,0);
        vector<ll>big(k+1,0);
        vector<ll>secBig(k+1,0);

        for(int i=1;i<=n;i++){
            cin>>a[i];
            ll step = i- last[a[i]]-1;
            if(step>=big[a[i]]){
                secBig[a[i]] = big[a[i]];
                big[a[i]] = step;
            }else if(step> secBig[a[i]]){
                secBig[a[i]] = step;
            }
            last[a[i]] = i;
        }
        //for(auto i:a)cout<<a<<" ";cout<<endl;
//         for(auto i:last)cout<<i<<" ";cout<<endl;
//         for(auto i:big)cout<<i<<" ";cout<<endl;
//         for(auto i:secBig)cout<<i<<" ";cout<<endl;
// cout<<endl;
        for(int i=1;i<=k;i++){
            int step = n+1 - last[i] -1;
            if(step>=big[i]){
                secBig[i] = big[i];
                big[i] = step;
            }else if(step> secBig[i]){
                secBig[i] = step;
            }
        }
        ll ans = INT32_MAX;
        for(int i=1;i<=k;i++){
            ans = min (ans, max((big[i])/2, secBig[i]));
        }
        cout<<ans<<endl;
    }
    return 0;
}