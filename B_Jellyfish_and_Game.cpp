#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,m,k;
        cin>>n>>m>>k;
        ll sum = 0;
        ll a[n],b[n];
        ll mn1= INT64_MAX, mn2 = INT64_MAX, mx1=INT32_MIN, mx2= INT32_MIN;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum += a[i];
            mn1 = min(mn1,a[i]);
            mx1 = max(mx1,a[i]);
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            mn2 = min(mn2,b[i]);
            mx2 = max(mx2,b[i]);
        }
        // cout<<mn1<<" "<<mx1<<endl;
        // cout<<mn2<<" "<<mx2<<endl;
        if(mn1<=mn2){
            if(k%2==1){
                sum += mx2 - mn1;
            }else{
                sum +=  min(mx1,mx2) - mx1;
            }
        }else if(mn1>=mx2){
            if(k%2 == 1){
                ;
            }else{
                sum += mn2 - mx1;
            }
        }else{
            if(k%2 == 1){
                sum += mx2 - mn1;
            }else{
                sum += min(mx1,mx2) - mx1;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}