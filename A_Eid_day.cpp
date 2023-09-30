
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t,n,s=1e8;
    cin>>t;

    while (t--)
    {
        cin>>n;
        ll a[n],dif;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n-1;i++){
            dif=a[i+1]-a[i];
            s=min(s,dif);

        }
        cout<<s<<endl;
        s=1e8;
    }
    

    return 0;
}
