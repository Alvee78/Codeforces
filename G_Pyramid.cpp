#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void space(int n){
    for(int i = 0; i < n; i++) {
        cout << " ";
    }
}
void star(int n){
    for(int i = 0; i < n; i++) {
        cout << "*";
    }cout << endl;
}
void solve(int n,int zero) {
    if(n < 1)return;
    solve(n-1,zero+1);
    space(zero);
    star(n*2-1);
}

int main(){
    int n;
    cin >> n;
    solve(n,0);
    return 0;
}