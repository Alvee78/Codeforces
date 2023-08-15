#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,m;
    cin>>n>>m;
    char a[n][m+1];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    
    bool f=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<m-1;j++){
            if(a[i][j]!=a[i][j+1]){
                f=false;
               // cout<<i<<" "<<j;
            }
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==a[i+1][j])f=false;
        }    
    }
    if(f)cout<<"YES";
    else cout<<"NO";
    return 0;
}