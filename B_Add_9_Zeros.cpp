#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int c=1;
    for(int i=1;i<n;i++){
        if(a[i]+9!=a[i-1]){
            c++;
        }
    }
    cout<<c;
    return 0;
}
