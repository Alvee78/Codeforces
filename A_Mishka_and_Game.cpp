#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t, a, b, s = 0;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        s += a > b, s -= a < b;
    }
    cout << (s > 0 ? "Mishka" : s ? "Chris"
                                  : "Friendship is magic!^^");
    return 0;
}