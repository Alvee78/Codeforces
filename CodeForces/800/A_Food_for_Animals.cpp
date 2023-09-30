#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,x,y,t;
    cin>>t;
    while (t--)
    {
        cin>>a>>b>>c>>x>>y;
        x=x-a;
        if(x<0){
            x=0;
        }
        y=y-b;
        if(y<0){
            y=0;
        }
        x=x+y;
        x=x-c;
        if(x<0){
            x=0;
        }
        if(x==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
    
    
    return 0;
}