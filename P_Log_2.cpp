#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define FIO         ios::sync_with_stdio(false);cin.tie(nullptr);

int log2(ll n) {
    if(n <= 1)return 0;
    return 1 + log2(n/2);
}

int main(){
FIO
    ll n;
    cin >> n;
    cout << log2(n);
    return 0;
}