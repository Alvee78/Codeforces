#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,a,b;
        cin>>n>>a>>b;
        for(int i=0;i<n;i++){
            cout<<char('a'+i/b);
        }cout<<endl;
    }
    return 0;
}