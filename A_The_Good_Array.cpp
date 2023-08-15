#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<((n-1)/k)+((n-1)%k!=0)+1<<endl;
    }
    return 0;
}