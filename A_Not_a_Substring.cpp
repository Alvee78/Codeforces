#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        string a, b;
        for (int i = 0; i < 2 * n; ++i)
        {
            a += "()"[i & 1];
            b += ")("[i < n];
        }
        if (a.find(s) == -1)
        {
            cout << "YES\n"
                 << a << '\n';
        }
        else if (b.find(s) == -1)
        {
            cout << "YES\n"
                 << b << '\n';
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}