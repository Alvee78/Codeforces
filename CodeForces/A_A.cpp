#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t,n,k;
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        vector<ll>v(n);
        set<ll>s;
        for(int i=0;i<n;i++){
            cin>>v[i];
            s.insert(v[i]);
        }
        ll mex=-1;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(v[i]!=i){
                mex=i;
                break;
            }
        }
        if(mex == -1 || k==0)cout<<(n+k)<<endl;
        else{
            ll q=mex+v[n-1];
            q=(q/2)+(q%2!=0);
            s.insert(q);
            cout<<s.size()<<endl;
        }
    }
    
    return 0;
}
/*
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░███░░░█░░░█░░░░░░░█░█████░█████░░░░
░░░░░██░░░██░█░░░░█░░░░░█░░█░░░░░█░░░░░░░░
░░░░░█░░░░░█░█░░░░██░░░██░░█░░░░░█░░░░░░░░
░░░░░█░░░░░█░█░░░░░█░░░█░░░███░░░███░░░░░░
░░░░░███████░█░░░░░░█░█░░░░█░░░░░█░░░░░░░░
░░░░░█░░░░░█░█░░░░░░█░█░░░░█░░░░░█░░░░░░░░
░░░░░█░░░░░█░█████░░░█░░░░░█████░█████░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
*/