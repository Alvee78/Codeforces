#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
         int a,b,c;
         cin>>a>>b>>c;
         int mn = min(a,b);
         int ans = max(a,b)-mn;
         ans = (ans+1)/2;
         ans = (ans+c-1)/c;
         cout<<ans<<endl;
    }
    return 0;
}