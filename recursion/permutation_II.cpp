#include<bits/stdc++.h>
using namespace std;
#define ll long long

void permutation(int idx,int n,int a[]){
    if(idx==n){
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    for(int i=idx;i<n;i++){
        swap(a[idx],a[i]);
        permutation(idx+1,n,a);
        swap(a[idx],a[i]);
    }
}

int main(){
    int a[]={2,1,3};
    int n=sizeof(a)/sizeof(int);
    permutation(0,n,a);
    return 0;
}