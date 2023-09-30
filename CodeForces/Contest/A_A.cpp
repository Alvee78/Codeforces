#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t,n,k,a[100001], c, ans;
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        for (int i = 0; i < n; i++)
            cin>>a[i];
        sort(a, a + n);
        c = 0;
        ans = n;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == c)
                c++;
            else
                break;
        }
        if (a[n]==c-1)
            ans+=k;
        else if (k > 0)
        {
            for (int i = 0; i < n; i++)
                if (a[i] == (a[n] + c + 1) / 2)
                {
                    ans--;
                    break;
                }
            ans++;
        }
        cout<<ans<<endl;
    }
}