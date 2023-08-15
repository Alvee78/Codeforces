#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,s;
    cin>>n;
    set<ll>a;
    for(int i=0;i<n;i++){
        cin>>s;
        a.insert(s);
    }
    cout<<a.size();
    return 0;
}