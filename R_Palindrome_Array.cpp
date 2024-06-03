#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define FIO         ios::sync_with_stdio(false);cin.tie(nullptr);

bool solve(ll idx,ll* a,ll n) {
    if(idx == n/2)return true;
    if(a[idx] != a[n-idx-1])return false;
    solve(idx+1,a,n);
}

int main(){
FIO
    int n;
    cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if(solve(0,a,n))cout << "YES";
    else cout << "NO";
    return 0;
}