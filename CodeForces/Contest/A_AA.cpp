#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,a,b,c=0,d=0,ta=0,t;
    cin>>n;
    long long int tr=0;
    while (n--)
    {
        cin>>t>>a>>b;
        if(t-ta<(abs(a-c)+abs(b-d))){
            tr=1;
        }else if(((t-ta)-(abs(a-c)+abs(b-d)))%2!=0){
            tr=1;
        }
        c=a;
        d=b;
        ta=t;
        
    }
    if(tr==1){
        cout<<"No";
    }else{
        cout<<"Yes";
    }
    
    return 0;
}