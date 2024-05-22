#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(int idx,int n,int *a) {
    if(idx>n-1)return;
    solve(idx+1,n,a);
    if(idx == 0 && idx%2 == 0)cout << a[idx] << endl;
    else if(idx%2 == 0)cout << a[idx] << " ";
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    solve(0,n,a);
    return 0;
}