#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s[0]-'a'!=0 && s[1]-'a'!=1 && s[2]-'a'!=2)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}