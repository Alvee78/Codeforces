#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        ll c=1;
        for(ll i=0;i<n-1;i++){
            if(a[i]!=a[i+1])break;
            else c++;
        }
        ll d=1;
        for(ll i=n-1;i>0;i--){
            if(a[i]!=a[i-1])break;
            else d++;
        }
        if(c==n)cout<<n*(n-1)<<endl;
        else cout<<2*c*d<<endl;
    }
    return 0;
}