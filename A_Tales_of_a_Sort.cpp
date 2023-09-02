#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>n>>a;
        int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        cin>>b;
        if (a > b) {
            ans = max(ans, a);
        }
        a = b;
    }
    cout<<ans<<endl;
    }
    return 0;
}