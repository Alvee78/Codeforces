#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        ll mx=INT64_MIN,b=0,c=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mx=max(mx,v[i]);
            if(i%2 && v[i]>0)b+=v[i];
            else if(v[i]>0) c+=v[i];
        }
        if(n==1)cout<<v[0]<<endl;
        else
            cout<<max(b,max(mx,c))<<endl;
        
    }
    return 0;
}