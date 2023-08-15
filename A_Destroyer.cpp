#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, n, s;
        int mx = 0, flag = 1;
        cin >> n;
        vector<int> v(101, 0);
        for (i = 0; i < n; i++)
        {
            cin >> s;
            mx = max(mx, s);
            v[s]++;
        }
        for (i = 1; i <= mx; i++)
        {
            if (v[i] > v[i - 1])
            {
                cout << "NO"<< "\n";
                flag = 0;
                break;
            }
        }
        if (flag){
            cout << "YES"<< "\n";
            }
    }
    return 0;
}