#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t,n,k;
    vector<ll>v(100000+1);
    v[0]=1;
    for(int i=1;i<100000+1;i++){
        v[i]=v[i-1]*2;
    }
    
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        ll sum=0;
        for(ll i=1;i<=n;i++){
            sum+=(i/__gcd(i,v[k]));
        }
        
        cout<<sum<<endl;
    }
    
    return 0;
}
