#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,k,f,t;
    cin>>n>>k;
    vector<ll>v;
    for(int i=0;i<n;i++){
        cin>>f>>t;
        if(t>k){
            v.push_back(f+k-t);
        }else{
            v.push_back(f);
        }
    }
    sort(v.begin(),v.end(),greater<ll>());
    cout<<v.front()<<endl;
    return 0;
}