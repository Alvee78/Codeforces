#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;
    int ans = INT32_MAX ,s;
    for(int i=0;i<n;i++){
        cin>>s;
        ans = min( ans , abs(s-0));
    }
    cout<<ans;
    return 0;
}