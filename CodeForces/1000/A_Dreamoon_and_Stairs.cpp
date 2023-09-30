#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int x;
    if(b>a){
        cout<<-1;
        return 0;
    }
    if(a%2==0){
        x=a/2;
    }else{
        x=a/2;
        x++;
    }
    if(x%b!=0){
        x+=b-(x%b);
    }
    cout<<x;
    return 0;
}