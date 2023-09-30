#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    long long int n,t,c;
    cin>>t;
    while (t--)
    {
        cin>>n;
        c=sqrt(n-1ll)+2;
        while(c*c>=n){
            c--;
        }
        cout<<c<<endl;
    }
    
    return 0;
}