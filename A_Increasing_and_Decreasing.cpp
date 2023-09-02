#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll x,y,n;
        cin>>x>>y>>n;
        n--;
        vector<ll>v;
        v.push_back(y);
        ll ans =(n*(n+1))/2;
        if(y-x>=ans){
            ll num = y;
            for(int i=1;i<=n-1;i++){
                v.push_back(num-i);
                num-=i;
            }
            v.push_back(x);
            reverse(v.begin(),v.end());
            for(auto i:v){
                cout<<i<<" ";
        }cout<<endl;
        }else{
            cout<<-1<<endl;
        }
        
    }
    return 0;
}