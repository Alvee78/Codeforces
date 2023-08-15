#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        string s,s2;
        cin>>s>>s2;
        ll n=s.size(),n2=s2.size();
        if(n>n2){
            ll d=n-n2;
            for(int i=0;i<d;i++){
                s2.insert(0,"0");
            }
        }else if(n<n2) {
            ll d=n2-n;
            for(int i=0;i<d;i++){
                s.insert(0,"0");
            }
        }

        ll ans=0;
        //cout<<s<<" " <<s2<<endl;
        ll flag=false;
        for(int i=0;i<s.size();i++){
            if(!flag){if(s[i]==s2[i])continue;
            else{
                flag=true;
                ans+=abs((s[i]-48)-(s2[i]-48));
            }}else{
                ans+=9;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}