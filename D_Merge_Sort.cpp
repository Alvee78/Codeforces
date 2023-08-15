#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll k=1;
void mergesort(ll n,vector<ll>&v,ll b,ll e){

    
    if(k<=1 || b+1>=e)return;
    ll mid=(b+e)/2;
    if((e-b)%2==0){
        mid--;
    }
    k-=2;
    vector<ll> tmp;
    
    mergesort(n,v,b,mid+1);
    mergesort(n,v,mid+1,e);
    int j=0;
    for(int i=mid+1;i<e;i++){
        tmp.push_back(v[i]);
    }
    for(int i=b;i<mid+1;i++){
        tmp.push_back(v[i]);
    }
    j=b;
    for(auto i:tmp){
        v[j++]=i;
    }
}

int main(){
    ll n;
    cin>>n>>k;
    if(k%2==0 ||(2*n-1)<k){
        cout<<-1;
        return 0;
    }
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        v[i]=i+1;
    }
    
    mergesort(n,v,0,n);
    for(auto x:v)cout<<x<<" ";
    return 0;
}