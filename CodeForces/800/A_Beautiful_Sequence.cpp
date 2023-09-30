#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll t,n,s;
    cin>>t;
    while (t--)
    {
        cin>>n;
        ll tr=0;
        for(int i=1;i<=n;i++){
            cin>>s;
            if(s<=i){
                tr=1;
            }
        }
        if(tr==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}