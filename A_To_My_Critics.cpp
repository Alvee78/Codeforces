#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
    int sum=0,mn=INT32_MAX,s;
    for(int i=0;i<3;i++){
        cin>>s;
        sum+=s;
        mn = min (s,mn);
    }
    if ( sum-mn>=10 ) cout<<"YES"<<endl;
    else  cout<<"NO"<<endl;
    }
    return 0;
}