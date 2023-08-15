#include<bits/stdc++.h>
using namespace std;
#define ll long long

void permutation(int n,int a[],vector<int>&v,map<int,bool>&m){
    if(v.size()==n){
        for(auto i:v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        if(!m[a[i]]){
            v.push_back(a[i]);
            m[a[i]]=true;
            permutation(n,a,v,m);
            m[a[i]]=false;
            v.pop_back();
        }
    }
}

int main(){
    int a[]={1,3,2};
    int n=sizeof(a)/sizeof(int);
    vector<int>v;
    map<int,bool>m={{1,0},{3,0},{2,0}};
    permutation(n,a,v,m);
    return 0;
}