#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll countCommonMultiples(ll a, ll b, ll n) {
    ll lcm = (a * b) / __gcd(a, b);
    ll count = n / lcm;
    return count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,a,b;
        cin>>n>>a>>b;
        ll divisibleByA = n/a;
        ll divisibleByB = n/b;
        ll common = countCommonMultiples(a,b,n);
        //cout<<common;
        divisibleByA -= common;
        divisibleByB -= common;
        ll ans = (n*(n+1)/2)-((n-divisibleByA)*(n-divisibleByA+1)/2)-(divisibleByB*(divisibleByB+1)/2);
        cout<<ans<<endl;
    }
    return 0;
}