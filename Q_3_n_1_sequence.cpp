#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define FIO         ios::sync_with_stdio(false);cin.tie(nullptr);

int cnt(ll n){
    if(n == 1)return 1;
    if(n%2)return 1 + cnt(3*n + 1);
    else return 1 + cnt(n/2);
}
int main(){
FIO
    ll n;
    cin >> n;
    cout << cnt(n);
    return 0;
}