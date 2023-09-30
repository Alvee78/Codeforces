#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll a,b,t,s;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        s=a;
        for(int i=0;i<b-1;i++){
            
            s=(s*a)%100;
        }
        cout<<s%10<<endl;
    }
    
    return 0;
}
