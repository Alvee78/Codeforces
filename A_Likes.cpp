#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,x,l=0,d=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x>0)l++;
            else d++;
        }
        for(int i=0;i<n;i++){
            if(i<l)cout<<i+1<<" ";
            else cout<<2 * l-(i+1)<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            if(i<d*2)cout<<(i+1)%2<<" ";
            else cout<< (i+1)-d*2<<" ";
        }
        cout<<endl;
    }
    return 0;
}