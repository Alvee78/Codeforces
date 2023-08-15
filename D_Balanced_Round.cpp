#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k,s=-1,mx=INT64_MIN;
        cin>>n>>k;
        vector<ll>v(n),cnt;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n-1;i++){
            if(v[i+1]-v[i]>k){
                cnt.push_back(i);
            }
        }
        cnt.push_back(n-1);
        //cout<<n-v.size()<<endl;
        for(int i=0;i<cnt.size();i++){
            mx=max(cnt[i]-s,mx);
            s=cnt[i];
        }
        cout<<n-mx<<endl;
    }
    
    
    return 0;
}