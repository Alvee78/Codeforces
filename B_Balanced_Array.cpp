#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n == 2 || (n/2)%2)cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(int i=2;i<=n;i+=2){
                cout<<i<<" ";
            }
            for(int i=1;i<n/2;i+=2){
                cout<<i<<" ";
            }
            for(int i = (n/2)+3; i<=n+1 ;i+=2){
                cout<<i<<" ";
            }cout<<endl;
        }

    }
    return 0;
}