#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct a
{
    char a[11],b[11];
};

int main(){
    int n,m;
    cin>>n>>m;
    string s;
    struct a a[m];
    for(int i=0;i<m;i++){
        cin>>a[i].a>>a[i].b;
    }
   
    for(int i=0;i<n;i++){
        
      cin>>s;
        for(int j=0;j<m;j++){
            if(s==a[j].a|| s==a[j].b){
                cout<<(strlen(a[j].a)<=strlen(a[j].b)?a[j].a:a[j].b)<<" ";
                break;
            }
        }
    }
    
    return 0;
}