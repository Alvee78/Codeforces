#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t,n;
    char s,a;
    cin>>t;
    while (t--)
    {
        cin>>n;
        cin>>s;
        a=s;
        for(int i=1;i<n;i++){
            cin>>s;
            if(s==a){
                cout<<a;
                if(i!=n-1){
                    i++;
                    cin>>s;
                    a=s;
                }
            }
            
        }cout<<endl;
    }
    
    return 0;
}