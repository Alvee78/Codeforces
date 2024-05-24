#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

ll fac(ll n) {
    if(n < 2) return 1;
    return n * fac(n-1);
}

int main(){
    ll n;
    cin >> n;
    cout << fac(n);
    return 0;
}