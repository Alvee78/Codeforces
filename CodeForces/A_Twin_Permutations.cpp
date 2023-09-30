#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,s;
        cin>>n;
        vector<int >v(n+1);
        for(int i=1;i<=n;i++){
            cin>>s;
            cout<<n-s+1<<" ";
        }cout<<endl;
    }
    
    return 0;
}