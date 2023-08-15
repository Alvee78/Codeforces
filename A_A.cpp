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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll mn=INT64_MAX;
        bool flag=false;
        for(int i=0;i<n-1;i++){
            if(v[i]>v[i+1]){
                flag=true;
            }else{
                mn=min(mn,v[i+1]-v[i]);
            }
        }
        if(flag)cout<<"0"<<endl;
        else cout<<mn/2+1<<endl;
    }
    return 0;
}