#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t,n,s;
    cin>>t;
    while (t--)
    {
        long long int c=0,o=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>s;
            if(s==0){
                c++;
            }
            if(s==1){
                o++;
            }
        }
        
        if(c<=(n+1)/2){
            cout<<"0"<<endl;
        }
        else{
            if(n-c==o)
            cout<<"2"<<endl;
            else
            cout<<"1"<<endl;
        }
    
    }
    return 0;
}