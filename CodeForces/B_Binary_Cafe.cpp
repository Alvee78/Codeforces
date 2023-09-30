#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,k,p=60;
        cin>>n>>k;
        k=min(k,p);
        if(pow(2,k)>n){
            cout<<n+1<<endl;
        }else{
            cout<<(1 << k)<<endl;
        }
    }
    
    return 0;
}