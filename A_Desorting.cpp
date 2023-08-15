#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,s,s2,flag = false;
        cin>>n;
        ll a[n-1];
        cin>>s;
        for(int i=0;i<n-1;i++){
            cin>>s2;
            if(s2<s)flag= true ;
            a[i]=s2-s;
            s=s2;
        }
        sort(a,a+n-1);
        if(flag) cout<<0<<endl;
        else if(a[0]==0)cout<<1<<endl;
        else
        cout<<(a[0]/2)+1<<endl;
    }
    return 0;
}