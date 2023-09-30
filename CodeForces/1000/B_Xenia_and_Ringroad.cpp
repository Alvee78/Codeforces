#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t,a,b,n,s=0;
    cin>>t>>n>>a;
    s+=a;
    s--;
    while (--n)
    {
        cin>>b;
        if(b>=a){
            s+=b-a;
            a=b;
        }else{
            s+=t-a+b;
            a=b;
        }
    }
    cout<<s;
    
    return 0;
}