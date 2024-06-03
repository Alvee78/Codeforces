#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define FIO  ios::sync_with_stdio(false);cin.tie(nullptr);
int dp[100];
int fib(int n) {
    if(dp[n] != -1)return dp[n];
    return dp[n]=fib(n-1)+fib(n-2);
}

int main(){
FIO
for(int i = 0; i < 100; i++) {
    dp[i] = -1;
}
dp[1]=0;
dp[2]=1;
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}