#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while (t--)
    {
        long long int one=0,two=0,st=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>st;
            if(st==2){
                two++;
            }else{
                one++;
            }
        }
        if(two%2!=0){
            cout<<"-1"<<endl;
        }else if(two==0){
            cout<<"1"<<endl;
        }else{
            cout<<two/2<<endl;
        }
    }
    
    return 0;
}