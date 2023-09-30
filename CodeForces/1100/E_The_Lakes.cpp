#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll traverse(ll n, ll m, ll i, ll j, vector<vector<ll>> &vec, vector<vector<ll>> &vis);
ll issafe(ll n, ll m, ll i, ll j, vector<vector<ll>> &vec, vector<vector<ll>> &vis)
{
    if (i >= 0 and i < n and j >= 0 and j < m)
    {
        return (vec[i][j]);
    }
    else
        return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, s, mx = 0;
        cin >> n >> m;
        vector<vector<ll>> vec;
        vector<vector<ll>> vis(n, vector<ll>(m, 0));

        for (ll i = 0; i < n; i++)
        {
            vector<ll> row;
            for (ll j = 0; j < m; j++)
            {
                cin >> s;
                row.push_back(s);
            }
            vec.push_back(row);
        }

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                if (vec[i][j] and !vis[i][j])
                {
                    vis[i][j] = 1;
                    ll vol = traverse(n, m, i, j, vec, vis) + vec[i][j];
                    mx = max(mx, vol);
                }
            }
        }

        cout << mx << endl;
    }
    return 0;
}

ll traverse(ll n, ll m, ll i, ll j, vector<vector<ll>> &vec, vector<vector<ll>> &vis)
{
    ll sum = 0;
    // up
    if (issafe(n, m, i - 1, j, vec, vis)  and !vis[i-1][j])
    {
        vis[i - 1][j] = 1;
        sum += traverse(n, m, i - 1, j, vec, vis) + vec[i - 1][j];
    }
    // down
    if (issafe(n, m, i + 1, j, vec, vis)  and !vis[i+1][j])
    {
        vis[i + 1][j] = 1;
        sum += traverse(n, m, i + 1, j, vec, vis) + vec[i + 1][j];
    }
    // right
    if (issafe(n, m, i, j + 1, vec, vis)  and !vis[i][j+1])
    {
        vis[i][j + 1] = 1;
        sum += traverse(n, m, i, j + 1, vec, vis) + vec[i][j + 1];
    }
    // left
    if (issafe(n, m, i, j - 1, vec, vis)  and !vis[i][j-1])
    {
        vis[i][j - 1] = 1;
        sum += traverse(n, m, i, j - 1, vec, vis) + vec[i][j - 1];
    }

    return sum;
}

/*
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░███░░░█░░░█░░░░░░░█░█████░█████░░░░
░░░░░██░░░██░█░░░░█░░░░░█░░█░░░░░█░░░░░░░░
░░░░░█░░░░░█░█░░░░██░░░██░░█░░░░░█░░░░░░░░
░░░░░█░░░░░█░█░░░░░█░░░█░░░███░░░███░░░░░░
░░░░░███████░█░░░░░░█░█░░░░█░░░░░█░░░░░░░░
░░░░░█░░░░░█░█░░░░░░█░█░░░░█░░░░░█░░░░░░░░
░░░░░█░░░░░█░█████░░░█░░░░░█████░█████░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
*/
