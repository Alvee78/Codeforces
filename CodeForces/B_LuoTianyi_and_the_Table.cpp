#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int m,n;
        cin>>n>>m;
        vector<int>v(n*m);
        for(auto &i:v)cin>>i;
        sort(v.begin(),v.end());
        int mx=v[v.size()-1],mx2=v[v.size()-2],mn=v[0],mn2=v[1];
        int a,b;
        a=max(n,m);
        b=min(n,m);
        int ans=(mx-mn)*(a-1)*b;
        ans+=(mx-mn2)*(b-1);
        int ans2=abs(mn-mx)*(a-1)*b;
        ans2+=abs(mn-mx2)*(b-1);
        cout<<max(ans,ans2)<<endl;
    }
    
    return 0;
}