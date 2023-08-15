#include<bits/stdc++.h>
using namespace std;
#define ll long long

void print(int a[],vector<int>&v,int i,int n){
    if(i==n){
        if(v.empty()==true)cout<<"{}"<<endl;
        else{
            for(auto x:v)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
        return;
    }

    print(a,v,i+1,n);
    v.push_back(a[i]);
    print(a,v,i+1,n);
    v.pop_back();
}

int main(){
    int a[]={2,4,3};
    int n=sizeof(a)/sizeof(int);
    int i=0;
    vector<int>v;
    print(a,v,i,n);
    return 0;
}