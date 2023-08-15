#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int a[],vector<int>&v,int target,int i,int n){
    if(i==n){
        if(target==0){
            for(auto x:v){
                cout<<x<<" ";
            }cout<<endl;
        }
        return;
    }
    if(target-a[i]>=0){
        v.push_back(a[i]);
        solve(a,v,target-a[i],i,n);
        v.pop_back();
    }
    solve(a,v,target,i+1,n);
}

int main(){
    int a[]={2,3,6,7};
    int n=sizeof(a)/sizeof(int);
    vector<int>v;
    int target=7;
    solve(a,v,target,0,n);
    return 0;
}