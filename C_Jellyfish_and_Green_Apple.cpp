#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--) {
        int n,m;
        cin >> n >> m;
        n %= m;
        int gcd = __gcd(m,n);
        int a = n / gcd;
        int b = m / gcd;
        if(__builtin_popcount(b)>1){
            cout << -1 << endl;
        }else {
            cout<< 1ll * __builtin_popcount(a) * m - n << endl;
        }
    }
    return 0;
}