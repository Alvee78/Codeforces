
#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll k,c=0,d=0;
    char a[500001],b[500001];
    cin>>k>>a>>b;
    //cout<<k<<" "<<a<<b<<endl;
    ll j=0;
    for(int i=strlen(a)-1;i>=0;i--){
        c+=(a[i]-48)*pow(k,j++);
    }
    j=0;
    for(int i=strlen(b)-1;i>=0;i--){
        d+=(b[i]-48)*pow(k,j++);
    }
    cout<<c*d;
    return 0;
}
