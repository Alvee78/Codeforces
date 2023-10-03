#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string s;
    cin>>s;
    int a[s.size()+1];
    a[1]=0;
    for(int i=2;i<s.size()+1;i++){
        if(s[i-1] == s[i-2]){
            a[i] = a[i-1] + 1;
        }else{
            a[i] = a[i-1];
        }
    }
    int t,l,r;
    cin>>t;
    while(t--){
        cin>>l>>r;
        cout<<a[r]-a[l]<<endl;
    }
    return 0;
}