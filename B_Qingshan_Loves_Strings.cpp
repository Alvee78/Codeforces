#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        bool agood = true,bgood = true;
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                agood = false;
            }
        }
        for(int i=0;i<m-1;i++){
            if(b[i]==b[i+1]){
                bgood = false;
            }
        }
        if(agood){
            cout<<"Yes"<<endl;
            continue;
        }
        if(!agood && !bgood){
            cout<<"No"<<endl;
            continue;
        }

        bool ans = true ;
        for( int i=0;i<n-1;i++ ){
            if( a[i]==a[i+1] ){
                if( b[0]==a[i] || b[m-1] == a[i] ){
                    ans = false ;
                    break;
                }
            }
        }

        if(ans){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}