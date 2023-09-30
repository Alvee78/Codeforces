#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    char str[101];
    cin>>t;
    while (t--)
    {
        cin>>n>>str;
        sort(str,str+n);
        cout<<str[n-1]-96<<endl;
    }
    
    return 0;
}