#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,c;
        cin>>n>>c;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll l=0;
        ll h=1e9;
        ll ans,mid;
        while (l<=h)
        {
            mid = (l+h) /2;
            ll s=0;
            for(int i=0;i<n;i++){
                s+= (2*mid + a[i]) * (2*mid + a[i]);
                if(s>c)break;
            }
            if(s==c){
                ans = mid;
                break;
            }
            if(s>c){
                h = mid;
            }else{
                l = mid;
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}