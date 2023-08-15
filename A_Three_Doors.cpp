#include <bits/stdc++.h>
using namespace std;
#define     ll long long
#define      yes cout << "YES\n";
#define      no cout << "NO\n";
#define      endl '\n'

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[4];
        int n;
        cin >> n;
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i + 1];
        }
        if (a[n] != 0 && a[a[n]] != 0)
        {
            yes
        }
        else
            no
    }
    return 0;
}