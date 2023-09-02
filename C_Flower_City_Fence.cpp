#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int b[n+1]={0};
        if(a[0]!=n){
            cout<<"NO"<<endl;
            continue;
        }

        for(int i=0;i<n;i++){
            b[a[i]-1]++;
        }
        for(int i=n-1;i>-1;i--){
            b[i]+=b[i+1];
        }
        bool flag = true;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i])flag = false;
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}