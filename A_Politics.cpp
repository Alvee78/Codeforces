#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string t[n];
        int ans = n;
        for(int i = 0; i < n; i++) {
            cin >> t[i];
            if(t[i] != t[0]) {
                ans--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}