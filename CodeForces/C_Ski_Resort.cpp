#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        ll n,k,q;
        cin>>n>>k>>q;
        ll c=0,s;
        vector<int>v;
        for(int i=0;i<n;i++){
            cin>>s;
            if(s<=q){
                c++;
            }else{
                v.push_back(c);
                c=0;
            }
            if(i==n-1)v.push_back(c);
        }
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i];
        // }
        ll ans=0;
        for(int i=0;i<v.size();i++){
            for(int j=k;j<=v[i];j++){
                ans+=v[i]-(j-1);
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}