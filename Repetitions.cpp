#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define FIO         ios::sync_with_stdio(false);cin.tie(nullptr);

void solve() {
    string s;
    cin >> s;
    ll ans = 1,tmp = 1;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == s[i-1]){
            tmp ++;
            ans = max(tmp,ans);
        }else{
            tmp = 1;
        }
    }
    cout << ans ;
}

int main(){
FIO
    
        solve();
    return 0;
}