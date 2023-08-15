#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int idx,int n,int a[],vector<int>&v,int t){
        if(t==0){
            for(auto x:v)cout<<x<<" ";
            cout<<endl;
            return;
        }
    for(int i=idx;i<n;i++){
        if(a[i]>t)break;
        if(i>idx && a[i-1]==a[i])continue;
        v.push_back(a[i]);
        solve(i+1,n,a,v,t-a[i]);
        v.pop_back();
    }
}

int main(){
    int a[]={1,1,1,2,2};
    int n=sizeof(a)/sizeof(int);
    sort(a,a+n);
    vector<int>v;
    solve(0,n,a,v,4);
    return 0;
}