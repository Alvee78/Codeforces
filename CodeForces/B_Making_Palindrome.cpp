#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t,n;
    cin>>t;
    while (t--)
    {
        ll c=0;
        cin>>n;
        char s[n+1];
        cin>>s;
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1])c++;
        }
        cout<<(c/2)+(c%2!=0)<<endl;
    }
    
    return 0;
}
