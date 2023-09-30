#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll t,n,i;
    cin>>t;
    while (t--)
    {
        cin>>n;
        if(n%2==0){
        cout<<"-1"<<endl;
        }else{
        i=0;
        ll a[50];
        for(i=0;n/2!=0;i++){
            if((n/2)%2==0){
                n=(n/2)+1;
                a[i]=1;
            }else{
                n=n/2;
                a[i]=2;
            }
        }
        cout<<i<<endl;
        i--;
        for(;i>0;i--){
            cout<<a[i]<<" ";
        }cout<<a[0]<<endl;
       }
    }
    
    return 0;
}