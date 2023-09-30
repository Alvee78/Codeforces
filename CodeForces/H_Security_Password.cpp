#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    char s[5];
    cin>>s;
    if (s[0]==s[1] && s[1]==s[2] && s[2]==s[3]){
        cout<<"Weak";
    }else if (((s[0]-48+1)%10==(s[1]-48))&&((s[1]-48+1)%10==(s[2]-48))&&((s[2]-48+1)%10==(s[3]-48))){
        cout<<"Weak";
    }else{
        cout<<"Strong";
    }
    return 0;
}
