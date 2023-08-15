#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,s,ans=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>s;
            ans^=s;
        }
        if(!ans)cout<<0<<endl;
        else if(n%2==0)cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}