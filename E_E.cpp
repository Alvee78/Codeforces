#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,m;
    cin>>n;
    ll x,y=1;
    for(int i=0;i<n;i++){
        cin>>x;
        
        y = x*y%1000000000;
    }
    ll z=1;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>x;
        z = z*x%10000000000;
    }
    cout<<__gcd(y,z);
    return 0;
}