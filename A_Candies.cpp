#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a=1,b=1,i=1;
        while (a<=n)
        {
            a=a|(b<<i++);
            if(n%a==0)break;
        }
        cout<<n/a<<endl;
    }
    return 0;
}