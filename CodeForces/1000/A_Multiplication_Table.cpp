#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, x, c = 0;
    cin >> n >> x;
    for (ll i = 1; i <= n; i++)
    {
        if (x % i == 0 && (x / i) <= n)
        {
            c++;
        }
    }

    cout << c;

    return 0;
}