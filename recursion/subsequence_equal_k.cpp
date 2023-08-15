#include<bits/stdc++.h>
using namespace std;
#define ll long long

void print(int a[],vector<int> &v,int i,int n,int s,int k){
    if(i==n){
        if(k==s){
            for(auto X:v)
            cout<<X<<" ";
            cout<<"= "<<s<<" = "<<k<<endl;
        }
        return;
    }
    v.push_back(a[i]);
    s+=a[i];
    print(a,v,i+1,n,s,k);
    v.pop_back();
    s-=a[i];
    print(a,v,i+1,n,s,k);
}

int main(){
    int a[]={1,2,1,6,7,8,3,6,9,3,2,1,1,4,5,1,5,1};
    int n=sizeof(a)/sizeof(int);
    int i=0;
    vector<int>v;
    int s=0,k=6;
    print(a,v,i,n,s,k);
    return 0;
}