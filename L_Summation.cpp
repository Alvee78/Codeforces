#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FIO         ios::sync_with_stdio(false);cin.tie(nullptr);
#define ain(a,n) ll a[n];for(int i=0;i<n;i++){cin>>a[i];}


int n;
ll solve(ll idx , ll* a) {
    if(idx == n) return 0;
    return a[idx]+solve(idx+1,a);
}
int main(){
    FIO
    cin >> n;
    ain(a,n);
    cout << solve(0,a);
    return 0;
}