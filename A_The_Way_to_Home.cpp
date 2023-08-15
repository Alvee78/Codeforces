#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,d;
string s;
ll idx(ll pre){
    ll in=-1;
    for(ll i=pre+1;i<=pre+d && i<n;i++){
        if(s[i]=='1'){
            in=max(in,i);
        }
    }
    return in;
}
int main(){
    cin>>n>>d;
    cin>>s;
    ll c=0,pre;
    for(ll i=0;i<n-1;){
        pre=idx(i);
        if(pre==-1){
            cout<<-1;
            return 0;
        }
        c++;
        i=pre;
    }
    if(pre==n-1)cout<<c;
    else cout<<-1;
    return 0;
}