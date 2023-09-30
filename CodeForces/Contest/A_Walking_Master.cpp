#include<bits/stdc++.h>
using namespace std;

int solve(int a,int b,int c,int d){
    return (d-b)+a+(d-b)-c;
}

int main(){
    int t,a,b,c,d;
    cin>>t;
    while (t--)
    {
        cin>>a>>b>>c>>d;
        if(d>=b&&c<=(a+(d-b))){
            cout<<solve(a,b,c,d)<<endl;
        }else{
            cout<<"-1"<<endl;
        }
    }
    
    return 0;
}