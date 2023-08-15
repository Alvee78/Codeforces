#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    char a[n+1],b[n+1];
    cin>>a;
    bool flag=true;
    ll j=n-1,k=0;
    for(int i=n-1;i>=0;i--){
        if(flag){
            flag=false;
            b[j--]=a[i];
        }else{
            flag = true;
            b[k++]=a[i];
        }
    }
    b[n]='\0';
    cout<<b;
    return 0;
}