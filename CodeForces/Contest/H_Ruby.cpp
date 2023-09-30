
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t,a,b;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        if(b>a){
            cout<<abs(a-b)<<endl;
            
        }else
        
            cout<<(a-b)%2<<endl;
    }
    
    return 0;
}
