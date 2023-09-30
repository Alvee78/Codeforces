#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,a,b,xb,ya;
    cin>>n>>a>>b;
    if((a*b)>=(6*n)){
        cout<<a*b<<endl;
        cout<<a<<" "<<b;
    }else{
        xb=(n*6)/a;
        ya=(n*6)/b;
        if(abs(xb-b)>=abs(ya-a)){
            cout<<ya*b<<endl;
            cout<<ya<<" "<<b;
        }else{
            cout<<xb*a<<endl;
            cout<<a<<" "<<xb;
        }
    }
    return 0;
}