#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            if(a-b>0)
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}