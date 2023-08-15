#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,m,k,h,cnt=0;
        cin>>n>>m>>k>>h;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll div;
        for(int i=0;i<n;i++){
            div=abs(v[i]-h);
            if((div<=(m-1)*k)&& (div%k==0) && div>0)cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}