#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll gcd = 0;

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            

        }
        sort(a,a+n);
        vector<ll>v,vb;
        ll store = a[0];
        for(int i=0;i<n;i++){
            if(store==a[i])v.push_back(a[i]);
            else vb.push_back(a[i]);
        }
        if(v.size()==0 || vb.size()==0)cout<<-1<<endl;
        else {
            cout<<v.size()<<" "<<vb.size()<<endl;
            for(auto i:v){
                cout<<i<<" ";
            }
            cout<<endl;
            for(auto i:vb){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        
    }
    return 0;
}