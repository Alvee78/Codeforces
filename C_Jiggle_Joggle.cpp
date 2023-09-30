#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n ;
    cin>>n;
    ll a[n];
    if(n==1){
        //cin>>a[0];
        cout<<1;
        return 0;
    }else if(n==2){
        //cin>>a[0];
    //cin>>a[1];
        cout<<2;
        return 0;
    }
    cin>>a[0];
    cin>>a[1];
    int ch,c=1;
    if(a[0]>=a[1]){
         ch =1;
    }else{
         ch= 0;
    }
    for(int i=1;i<n;i++){
       if(i!=1)cin>>a[i];
        if(ch){
            if(a[i]<a[i-1]){
                c++;
                ch=0;
            }
        }else {
            if(a[i]>a[i-1]){
                c++;
                ch=1;
            }
        }
    }cout<<c;
    return 0;
}
