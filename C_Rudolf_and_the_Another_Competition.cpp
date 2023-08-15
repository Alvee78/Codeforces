#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, h, rnk, rnkp;
        cin >> n >> m >> h;
        vector<vector<ll>> t(n, vector<ll>(m));
        vector<pair<ll, ll>> v(n);
        multimap<ll,ll, greater<ll>>m2;
        multimap<ll,ll>m1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> t[i][j];
            }
        }
        for(int i=0;i<n;i++){
            sort(t[i].begin(),t[i].end());
        }
        for(int i=0;i<n;i++){
            ll tim=h,penalty=t[i][0],p=0,c=0;
            for(int j=0;j<m;j++){
                if(t[i][j]<=tim){
                    c++;
                    p+=penalty;
                    penalty+=t[i][j+1];
                    tim-=t[i][j];
                }
            }
            if(i==0){
                rnk=c;
                rnkp=p;
                m1.insert({p,c});
            }else{
                m1.insert({p,c});
            }
        }
        for(auto i:m1){
            m2.insert({i.second,i.first});
        }
        // cout<<rnk<<"    "<<rnkp<<endl;
        // for (auto i:m2){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        // cout<<endl;
        ll c=1;
        for(auto i:m2){
            if(i.first==rnk && i.second==rnkp){
                cout<<c<<endl;
                break;
            }c++;
        }
    }
    return 0;
}