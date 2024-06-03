#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define FIO         ios::sync_with_stdio(false);cin.tie(nullptr);

void solve(int idx,int* a,int n,int mx) {
    if(n == idx)return;
    cout << max(mx,a[idx]) << " ";
    solve(idx+1,a,n,max(mx,a[idx]));
}

int main(){
FIO
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    solve(0,a,n,INT_MIN);
    return 0;
}