#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }

        for (int i = 0; i < n - 1; i++)
        {
            v[i] = abs(v[i] - v[i + 1]);
        }

        v.pop_back();
        sort(v.begin(), v.end());

        ll ans = 0;
        for (int i = 0; i < n - k; i++)
        {
            ans += v[i];
        }

        cout << ans << endl;
    }
    return 0;
}