#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    ll k,a,b;
    while (t--)
    {
        cin>>k>>a>>b;
        if(((a+b)/k)%2==0){
           cout<<"Thiago"<<endl;
        }else{
           cout<<"Nathan"<<endl;
        }
    }
    
    return 0;
}
