#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        string s;
        ll c=0,ans=0;
        cin>>n>>s;
        for(int i=0;i<n;i++){
            if(s[i]==s[i+1])c++;
            else c=0;
            ans=max(c,ans);
        }
        cout<<ans+2<<endl;
    }
    return 0;
}