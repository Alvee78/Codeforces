#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    n--;
    string s="codeforces";
    
    cout<<s;
    for(int i=0;i<n/2;i++){
        if(n>=2)cout<<"ss";
        n-=2;
    }
    if(n==1)cout<<"s";
    return 0;
}