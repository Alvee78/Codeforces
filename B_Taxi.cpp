#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int i,j,n,one = 0, two = 0 , three = 0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)one++;
        else if(a[i] == 2)two++;
        else if(a[i] == 3)three++;
    }
    
    int ans = n - one - two -three;
    ans += three;
    one = max (0, one - three);
    two += one / 2;
    one = one % 2;
    ans += two / 2;
    two %= 2;
    if(two>0 || one > 0)ans++;
    cout<<ans;

    return 0;
}