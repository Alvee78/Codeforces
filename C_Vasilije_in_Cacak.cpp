#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k,x;
        cin >> n >> k >> x;
        if(x <= (n*(n+1)/2)-((n-k)*(n-k+1)/2) && x >= (k*(k+1)/2)){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
        
    }
    return 0;
}