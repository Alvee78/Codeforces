#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t,i;
    cin>>n>>t;
    char a[101];
    for(i=0;i<n;i++){
        if(i==0){
            a[i]='1';
        }else{
            a[i]='0';
        }
    }
    a[i]='\0';
    int r=0;
    for(int j=0;j<strlen(a);j++){
        r=r*10+a[j]-48;
        r=r%t;
    }
    int k=t-r;
     if(n!=1)
    a[i-1]=k+48;
    else if(k!=9 || k!=10)
    a[i-1]=k+48+1;
    if(a[i-1]==':'){
        a[i-1]='0';
    }
    if(n==1 && t==10){
        cout<<"-1";
    }
    else
    cout<<a;

    return 0;
}