#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int a,b;
    cin>>a>>b;
    a=max(a,b);
    a=6-a+1;
    if(a==0)cout<<0<<"/"<<1;
    else if(a==6)cout<<"1/1";
    else if(a%3==0){
        cout<<a/3<<"/"<<2;
    }else if(a%2==0)
        cout<<a/2<<"/"<<3;

    else 
    cout<<a<<"/"<<6;
    return 0;
}