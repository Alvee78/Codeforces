#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(int n) {
    if(n < 1)return;
    cout <<"I love Recursion" << endl;
    solve(n-1);
}

int main(){
    int n;
    cin >> n;
    solve(n);
    return 0;
}