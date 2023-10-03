#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,k;
        cin>>n>>k;
        bool flag = false;
        for(int i=0;i<n;i++){
            cin>>a;
            if(a == k){
                flag = true;
            }
        }
        if(flag){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}