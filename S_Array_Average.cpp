#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define FIO         ios::sync_with_stdio(false);cin.tie(nullptr);

double solve(ll idx,ll* a,ll n) {
    if(idx == 0 )return (double)a[0]/n;
    a[idx -1] += a[idx];
    return solve(idx-1,a,n);
}

int main(){
FIO
    int n;
    cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << setprecision(7) << solve(n-1,a,n);
    return 0;
}