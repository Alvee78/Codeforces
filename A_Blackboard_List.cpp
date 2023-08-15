#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s;
        int mn = INT_MAX, mx = INT_MIN;
        for(int i=0;i<n;i++){
            cin>>s;
            mn=min(mn,s);
            mx=max(mx,s);
        }
        if(mn<0)cout<<mn<<endl;
        else cout<<mx<<endl;
    }
    return 0;
}