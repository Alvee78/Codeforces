#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,c=0,s,ans2=0;
        cin>>n;
        ll a[n];
        ll ans=0;
        for(ll i=0;i<n;i++){
            cin>>s;
            ans+=abs(s);
            if(s>0)c=0;
            else if(s<0){
                c++;
                if(c==1)ans2++;
            }
        }
        cout<<ans<<" "<<ans2<<endl;
    }
    return 0;
}