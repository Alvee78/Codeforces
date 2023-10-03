#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,n;
        cin>>a>>b>>n;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(a == 1){cout<<1<<endl;continue;}
        ll time = b;
        for(int i=0;i<n;i++){
            time += min (a,arr[i]);
            if(a<=arr[i])time--;
        }
        cout<<time<<endl;
    }
    return 0;
}