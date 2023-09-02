#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
    int n,m,count=0;
    cin>>n>>m;
    vector<string> str(n);
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    //cout<<1;
    for( int i=0;i<m;i++ ){
        for(int j=0;j<n;j++){
            char ch = str[j][i];
            if( count==0 && ch=='v' ){
                count++;
                break;
            }
            else if( count==1 && ch=='i' ){
                count++;
                break;
            }
            else if( count==2 && ch=='k' ){
                count++;
                break;
            }
            else if( count==3 && ch=='a' ){
                count++;
                break;
            }
        }
    }
    if( count==4 )
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
    return 0;
}