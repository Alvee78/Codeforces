#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll s=0,s_=0;
        vector<ll> a(n),b(m);
        for(int i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            s_+=b[i];
        }
        if(s==s_)cout<<"Draw"<<endl;
        else if(s>s_)cout<<"Tsondu"<<endl;
        else cout<<"Tenzing"<<endl;
        
        
    }
    return 0;
}