#include<bits/stdc++.h>
using namespace std;

int main(){
    int h,m,s;
    string a;
    cin>>h>>m>>s>>a;
    if(a=="AM"){
        cout<<s+(h*3600)+(m*60);
    }else{
        cout<<s+(h*3600)+(m*60)+(12*3600);
    }
    return 0;
}