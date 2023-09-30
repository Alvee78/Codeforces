#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a,b,x,y;
    cin>>t;
    while(t--){
        cin>>a>>b;
        a=abs(a);
        b=abs(b);
        x=min(a,b);
        if(a==b){
            y=0;
        }else{
            y=(2*abs(a-b))-1;
        }
        cout<<(2*x)+y<<endl;
    }
    return 0;
}