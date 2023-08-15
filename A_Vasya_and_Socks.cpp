#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,m;
    ll c=0;
    cin>>n>>m;
    while (n>=m)
    {
        c+=(n/m)*m;
        n=(n/m)+(n%m);
    }
    cout<<c+n;
    return 0;
}