#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        a * b - 1 == c?(cout<<"YES"):(cout<<"NO");
        cout<<endl;
    }
    return 0;
}