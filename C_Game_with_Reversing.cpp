#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        ll n=a.size(),c=0,c2=0;

        for(int i=0;i<n;i++){
            if(a[i]!=b[i])c++;
        }
        reverse(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(a[i]!=b[i])c2++;
        }
        if(c>=c2){
            cout<<2*c+1<<endl;
        }else{
            cout<<2*c<<endl;
        }
    }
    return 0;
}