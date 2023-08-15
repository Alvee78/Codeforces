#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k,c=0;
        cin>>n>>k;
        if(k>30){
            cout<<0<<endl;
            continue;
        }
        for(int i=0;i<=n;i++){
            ll second_last = i;
            ll last = n;
            for(int j=0;j<k-2;j++){
                ll tmp;
                tmp = last - second_last;
                if(tmp<=second_last && tmp>=0){
                    last = second_last;
                    second_last = tmp;
                    if(j==k-3){
                        c++;
                    }
                }else{
                    break;
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}