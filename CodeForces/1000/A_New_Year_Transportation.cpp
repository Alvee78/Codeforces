#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t,n,s=0,j=1;
    cin>>t>>n;
    for(long long int i=1;i<t;i++){
        if(j==n){
            cout<<"YES";
            return 0;
        }
        cin>>s;
        if(i==j)
        j=i+s;
    }
    if(j==n){
            cout<<"YES";
            return 0;
        }
    cout<<"NO";
    return 0;
}