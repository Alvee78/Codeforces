#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t,a,b;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        ll x=0,c=0,a[1000000]={0};
        for(;x<1000;x++){
            if((__gcd(a+x,b+x))>0 && a[__gcd(a+x,b+x)]<0){
                a[__gcd(a+x,b+x)]++;
                c++;cout<<__gcd(a+x,b+x)<<endl;
            }
        }
        
    }
    
    return 0;
}
