#include<bits/stdc++.h>
using namespace std;
#define ll long long
void bin_srch(ll a[],ll x,ll low,ll high){
    ll mid= low + (high - low) / 2;
    if(a[mid]>=x && a[mid-1]<x){
        cout<<mid<<" "<< x-a[mid-1] <<endl;
    }else if(a[mid]<x){
        bin_srch(a,x,mid+1,high);
    }else{
        bin_srch(a,x,low,mid);
    }
    
}

int main(){
    ll n,m;
    char a="hjdhfha";
    cin>>n>>m;
    ll a[n+1],s;
    a[0]=0;
    cin>>a[1];
    for(ll i=2;i<=n;i++){
        cin>>a[i];
        a[i]+=a[i-1];
    }
   
    for(ll i=1;i<=m;i++){
        cin>>s;
        bin_srch(a,s,1,n);
    }
    return 0;
}
ll bin_srch(ll a[],ll x,ll low,ll high){
    ll mid= low + (high - low) / 2;
    if(a[mid]==x){
        return mid;
    }else if(a[mid]<x){
        return bin_srch(a,x,mid+1,high);
    }else{
        return bin_srch(a,x,low,mid);
    }

}