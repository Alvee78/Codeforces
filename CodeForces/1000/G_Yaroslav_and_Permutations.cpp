#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,h=0,s,a[1001]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        a[s]++;
        if(a[s]>=h){
            h=a[s];
        }
    }
    n=(n/2)+(n%2!=0);
    //cout<<h<<n;
    if(h<=n){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
