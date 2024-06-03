#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define FIO         ios::sync_with_stdio(false);cin.tie(nullptr);

void solve() {
    int n;
    cin >> n;
    if(n <= 3 && n != 1 )cout << "NO SOLUTION" ;
    else{
        for(int i = 2; i <= n; i+=2) {
            cout << i << " ";
        }
        for(int i = 1; i <= n; i+=2) {
            cout << i << " ";
        }
    }
}

int main(){
FIO
    
        solve();
    return 0;
}