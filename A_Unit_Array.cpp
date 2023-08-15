#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int m=0,p=0,s;
        for(int i=0;i<n;i++){
            cin>>s;
            if(s==1)p++;
            else m++;
        }
        int d=m-p;
        if(d==0){
            int c=0;
            while (!((m%2)==0 && ((m*(-1))+p)>=0))
            {
                m--;
                p++;
                c++;
            }
            cout<<c<<endl;
        }else if(d>0){
            int c=0;
            while (!((m%2)==0 && ((m*(-1))+p)>=0))
            {
                m--;
                p++;
                c++;
            }
            cout<<c<<endl;
            
        }else{
        if(m%2){
            cout<<1<<endl;
        }else{
            cout<<0<<endl;
        }
    }
    }
    return 0;
}