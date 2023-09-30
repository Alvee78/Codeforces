#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string a;
    int t;
    cin>>t;
    while (t--)
    {
        cin>>a;
        int c=0,n=a.size();
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1])c++;
        }
        if(c==n-1)cout<<-1<<endl;
        else cout<<n-1<<endl;
    }
    
    return 0;
}