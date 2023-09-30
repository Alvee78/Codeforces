#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll a=0;
        for(int i=0;i<n/2;i++){
            a=__gcd(a,abs(v[i]-v[n-i-1]));
        }
        cout<<a<<endl;
    }
    
    return 0;
}