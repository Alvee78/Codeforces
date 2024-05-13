#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll f(ll n, ll x, vector<ll>& a, vector<ll>& p) {
    if (n == 0) {
        return (x <= 0) ? 0 : 1;
    } else if (x <= 1 + a[n - 1]) {
        return f(n - 1, x - 1, a, p);
    } else {
        return p[n - 1] + 1 + f(n - 1, x - 2 - a[n - 1], a, p);
    }
}

int main() {
    ll n, x;
    cin >> n >> x;
    vector<ll> a = {1}, p = {1};
    for (int i = 0; i < n; ++i) {
        a.push_back(a[i] * 2 + 3);
        p.push_back(p[i] * 2 + 1);
    }
    cout << f(n, x, a, p) << endl;
    return 0;
}