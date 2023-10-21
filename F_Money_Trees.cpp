#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int indLessThenK = -1;
        ll sum = 0;
        ll n,k;
        cin >>n>> n >> k;
        ll divisibleRange[n]={0};
        int a[n],apple[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        partial_sum(a,a+n,apple);
        ll range[n];
        ll store,store2;
        cin>>store;
        for(int i=0;i<n-1;i++){
            cin>>store2;
            if(store%store2){
                range[i] = 0;
            }else{
                range[i] = 1;
            }
        }
        ll count = 0;
        for(int i=1;i<n;i++){
            if(range[i-1]){
                if(apple[])
            }
        }
    }
    
    return 0;
}