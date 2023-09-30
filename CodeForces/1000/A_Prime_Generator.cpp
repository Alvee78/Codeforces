#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool is_prime(ll n){
    if(n<=1){
        return 0;
    }
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        ll m,n;
        cin>>m>>n;
        for(ll i=m;i<=n;i++){
            if(is_prime(i)){
                cout<<i<<endl;
            }
        }
        cout<<endl;
    }
    
    return 0;
}