
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t,a,b;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        if(a%b==0){
            cout<<1<<endl;
        }else{
            cout<<(b>a?((b/a)+(b%a!=0)):2)<<endl;
        }
    }
    
    return 0;
}
