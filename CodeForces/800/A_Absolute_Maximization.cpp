#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,s,min,max;
    cin>>t;
    while (t--)
    {
        cin>>n;
        min=1023;max=0;
        for(int i=0;i<n;i++){
            cin>>s;
            max=max|s;
            min=min&s;
        }
        cout<<max-min<<endl;
    }
    
    return 0;
}