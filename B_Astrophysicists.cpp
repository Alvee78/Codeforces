#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k,g;
        cin>>n>>k>>g;
        //int flag=true;
        if(k*g-(((g+1)/2)-1)*n<0){
            cout<<k*g<<endl;
        }else{
            cout<<k*g-((((k*g-(((g+1)/2)-1)*n+g-1)/g)*g))<<endl;
        }

    }
    return 0;
}