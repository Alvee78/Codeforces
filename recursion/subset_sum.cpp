#include<bits/stdc++.h>
using namespace std;
#define ll long long

void subset_sum(int i,int n,int *a,vector<int>&v,int sum){
    if(i==n){
        v.push_back(sum);
        return;
    }
    subset_sum(i+1,n,a,v,sum+a[i]);
    subset_sum(i+1,n,a,v,sum);
}

int main(){
    int a[]={3,1,2};
    int n=sizeof(a)/sizeof(int);
    vector<int>v;
    subset_sum(0,n,a,v,0);
    for(auto x:v)cout<<x<<" ";
    cout<<endl;
    sort(v.begin(),v.end());
    for(auto x:v)cout<<x<<" ";
    return 0;
}