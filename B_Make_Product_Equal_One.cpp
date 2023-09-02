#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    ll min_one =0;
    ll s;
    ll ans = 0;
    ll zero =0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s < 0){
            ans += abs(s+1);
            min_one++;
        }
        else if(s== 0){
            zero++;
            ans += abs(s-1);
        }
        else ans += abs(s-1);
    }
    if(zero>0 && min_one%2)ans-=2;
    cout<<(min_one%2?ans+2:ans);
    return 0;
}