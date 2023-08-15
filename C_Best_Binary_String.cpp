#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        //s = s + '1';
        //cout<<s<<endl;
        char pre = '1';
        ll n = s.size();
        for(int i=n-1;i>=0;i--){
            if(s[i]=='?'){
                s[i] = pre;
            }else if(s[i]=='0'){
                pre = '0';
            }else{
                pre = '1';
            }
        }
        cout<<s<<endl;
    }
    return 0;
}