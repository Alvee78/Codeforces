#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    char a;
    cin>>a;
    int b;
    if(a=='R') b=-1;
    else b=1;
    char s[]={"qwertyuiopasdfghjkl;zxcvbnm,./"};
    while(cin>>a){
        for(int i=0;i<strlen(s);i++){
            if(s[i]==a)cout<<s[i+b];
        }
    }
    return 0;
}