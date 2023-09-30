#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c=0;
    cin>>a>>b;
    while(a>=b){
        c+=a-a%b;
        a=a/b+a%b;
    }
    cout<<c+a;
    return 0;
}