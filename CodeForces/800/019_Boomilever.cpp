#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,s,c=0;
    cin >> t>>n;
    while (t--)
    {
        cin>>s;
        if(s<=n){
            c++;
        }
    }cout<<c;
    
    return 0;
}