#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b){
            cout<<"First"<<endl;
        }else if(a == b){
            if(c%2==1)cout<<"First"<<endl;
            else cout<<"Second"<<endl;
        }else{
            cout<<"Second"<<endl;
        }
    }
    return 0;
}