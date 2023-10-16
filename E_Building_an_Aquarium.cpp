#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        ll a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        ll h=a[0];
        for(int i=1;i<n;i++){
           ll dif = a[i]-a[i-1]; 
           ll wat = dif * i;
           if(x<wat){
                h = a[i-1];
                ll perStep = i;
                h+=x/perStep;
                x = 0;
                break;
           }{
            x-= wat;
            h = a[i];
           }

        }
        if(x>0){
            h+= x/n;
        }
        cout<<h<<endl;
    }
    return 0;
}