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
        
        cout<<(n%2?(((n+1)/2)*((n+1)/2)*4)+1:(4*((n/2)*((n/2)+1)))+2)<<endl;
    }
    
    return 0;
}