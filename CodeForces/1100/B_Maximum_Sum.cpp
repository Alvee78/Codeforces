#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t,n,k;
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        ll v[n],pre[n+1];
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v,v+n);
        ll m=0;
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]+v[i];
        }
        for(int i=0;i<=k;i++){
            m=max(m,pre[n-i]-pre[2*(k-i)]);
        }
        cout<<m<<endl;
    }
    
    return 0;
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