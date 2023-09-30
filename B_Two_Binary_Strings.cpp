#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        string s,s2;
        cin>>s>>s2;
        bool flag = false;
        for(int i=0;i<s.size()-1;i++){
            if(s[i] == s2[i] && s[i] == '0' && s[i+1] == s2[i+1] && s[i+1] == '1'){
                flag = true;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}