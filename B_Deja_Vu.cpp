#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,q;
    cin>> n>>q;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l = INT32_MAX,x;
    for(int i=0;i<q;i++){
        cin >> x;
        if(x < l){
            l = x;
            int st = pow(2,x-1),st2 = st * 2;;
            for(int i=0;i<n;i++){
                if(a[i] % st2 == 0){
                    a[i] += st;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    }
    return 0;
}