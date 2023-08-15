#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n%2020<=n/2020)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}