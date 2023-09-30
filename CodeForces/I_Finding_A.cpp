#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    char s[101];
    cin>>s;
    int c=-1;
    for(int i=strlen(s)-1;i>=0;i--){
       if(s[i]=='a'){
            c=i+1;
            break;
       } 
    }
    if (c==-1){
        cout<<c;
    }else{
        cout<<c;
    }
    return 0;
}
