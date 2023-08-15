#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--) {
        int n;
        string s; cin>>n>>s;
        string mx,mn;
        if(s[0]=='2') {mx.push_back('1'); mn.push_back('1');}
        else {mx.push_back('2'); mn.push_back('2');}
        bool flag=true;
        for(int i=1;i<n;i++){
            if(flag){
                if(s[i]=='0'){mx.push_back('0'); mn.push_back('0');}
                else if(s[i]=='2'){mx.push_back('1'); mn.push_back('1');}
                else {mx.push_back('1'); mn.push_back('0');flag=false;}
            }
            else{
                mx.push_back('0'); mn.push_back(s[i]);
            }
        }
    cout<<mx<<endl<<mn<<endl;
    }
    return 0;
}