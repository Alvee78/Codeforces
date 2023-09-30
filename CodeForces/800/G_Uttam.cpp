#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    long long int a[t],c=0;
    cin>>a[0];

    for(int i=1;i<t;i++){
        cin>>a[i];
        if(a[i]<a[i-1]){
            c+=a[i-1]-a[i];
            a[i]=a[i-1];
        }
    }
    cout<<c;
    return 0;
}