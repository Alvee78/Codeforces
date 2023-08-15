#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,s;
        cin>>n;
        ll odd =0 ;
        for(int i=0;i<n;i++){
            cin>>s;
            if(s%2)odd++;
        }
        if(odd%2)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}