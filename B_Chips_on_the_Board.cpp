#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n],b[n];
        ll aa = 0,bb = 0,amin = INT32_MAX ,bmin =INT32_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
            aa += a[i];
            amin = min (amin, a[i]);
        }
        // cout<<aa<< " "<<amin<<endl;

        for(int i=0;i<n;i++){
            cin>>b[i];
            bb += b[i];
            bmin = min (bmin, b[i]);
        }
        // cout<<bb<<" "<<bmin;
        amin *= n;
        bmin *= n;
        cout<<min(amin+bb,bmin+aa)<<endl;
        // sort(a,a+n);
        // sort(b,b+n);
        
    }
    return 0;
}