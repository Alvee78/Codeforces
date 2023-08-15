#include<bits/stdc++.h>
using namespace std;
#define ll long long

void subset(int idx,int n,int a[],vector<int>&v){
    for(auto x:v){
        cout<<x<<" ";
    }cout<<endl;
    for(int i=idx;i<n;i++){
        if(i>idx and a[i]==a[i-1])continue;
        v.push_back(a[i]);
        subset(i+1,n,a,v);
        v.pop_back();
    }
}

int main(){
    int a[]={1,2,2,2,3,3};
    int n=sizeof(a)/sizeof(int);
    vector<int>v;
    subset(0,n,a,v);
    return 0;
}