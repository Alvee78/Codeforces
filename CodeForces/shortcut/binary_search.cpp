#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll bin_srch(ll a[],ll x,ll low,ll high){
    ll mid= low + (high - low) / 2;
    if(a[mid]==x){
        return mid;
    }else if(a[mid]<x){
        return bin_srch(a,x,mid+1,high);
    }else{
        return bin_srch(a,x,low,mid);
    }
    return -1;
}

int main(){
    ll a[5]={6,4,9,3,11};
    cout<<bin_srch(a,9,0,4)+1;
    return 0;
}