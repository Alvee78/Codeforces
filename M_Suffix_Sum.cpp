#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FIO         ios::sync_with_stdio(false);cin.tie(nullptr);
#define ain(a,n) ll a[n];for(int i=0;i<n;i++){cin>>a[i];}


int n,m;
ll solve(ll idx , ll* a) {
    if(idx == m) return 0;
    return a[n-1-idx]+solve(idx+1,a);
}
int main(){
    FIO
    cin >> n >> m;
    ain(a,n);
    cout << solve(0,a);
    return 0;
}