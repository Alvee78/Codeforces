#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,online,notification;
        cin>>n>>online>>notification;
        int count = online;
        string s;
        cin>>s;
        bool flag = false;
        if(online == n)flag = true;

        for(int i=0;i<notification;i++){
            if(s[i]=='+'){
                
                count++;
                online++;
            }else{
                online--;
            }
           if(online == n)flag = true;
        }
        if(flag){
            cout<<"YES"<<endl;
        }else if(count>=n){
            cout<<"MAYBE"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}