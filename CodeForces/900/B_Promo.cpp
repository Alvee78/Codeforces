#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,q;
    cin>>n>>q;
    ll arr[n+1];
    arr[0]=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    sort(arr+1,arr+n+1);
    for(int i=2;i<=n;i++){
        arr[i]+=arr[i-1];
    }
    ll a,b;
    for(int i=1;i<=q;i++){
        cin>>a>>b;
        cout<<arr[n-a+b]-arr[n-a]<<endl;
    }

    return 0;
}