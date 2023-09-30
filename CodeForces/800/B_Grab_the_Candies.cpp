#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,m,n,a,b;
    cin>>t;
    while (t--)
    {
        a=0;
        b=0;
        cin>>n;
        while (n--)
        {
            cin>>m;
            if(m%2==0){
                a+=m;
            }else{
                b+=m;
            }
        }
        if(a>b){
            cout<<"YES"<<endl;
        }else{
             cout<<"NO"<<endl;
        }
        
        
    }
    
    return 0;
}