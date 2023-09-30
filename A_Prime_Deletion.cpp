#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i] == '1'){
                cout<<17<<endl;
                break;
            }
            if(s[i] == '7'){
                cout<<71<<endl;
                break;
            }
        }
    }
    return 0;
}