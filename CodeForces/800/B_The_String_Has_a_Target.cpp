#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        char s[n + 1];
        cin >> s;
        int pos = 0;
        for (int i = 0; i < n; i++)
            if (s[pos] >= s[i])
                pos = i;
        cout << s[pos];
        for (int i = 0; i < n; i++)
            if (i != pos)
                cout << s[i];
                cout << endl;

    }
    
    return 0;
}