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
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        ll st;
        int s=INT_MAX;
        for(int i=0;i<n;i++){
            s&=a[i];
            st=s;
        }
        if(s>0)cout<<1<<endl;
        else{
            ll c=0;
            s=INT_MAX;
            for(int i=0;i<n;i++){
                s&=a[i];
                if(s==0){
                    c++;
                    if(i==n-1)break; 
                    s=INT_MAX;
                }
            }
            if(c==0)cout<<c+1<<endl;
            else cout<<c<<endl;
        }
    }
    return 0;
}