#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[101],temp;
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        for(int i=1;i<strlen(s);i+=2){
            temp=s[i];
            s[i]=s[i-1];
            s[i-1]=temp;
        }cout<<s<<endl;
    }
    return 0;
}