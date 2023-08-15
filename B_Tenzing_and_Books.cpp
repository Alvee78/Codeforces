#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        vector<ll>fi(n),se(n),th(n);
        for(int i=0;i<n;i++){
            cin>>fi[i];
        }
        for(int i=0;i<n;i++){
            cin>>se[i];
        }
        for(int i=0;i<n;i++){
            cin>>th[i];
        }
        //for(auto i:fi)cout<<i<<" ";cout<<endl;
        ll sum=0;
        for(int i=0;i<n;i++){
            if((fi[i] & x) == fi[i])sum|=fi[i];
            else{
                break;
            }
        }
        for(int i=0;i<n;i++){
            if((se[i] & x) == se[i])sum|=se[i];
            else{
                break;
            }
        }
        for(int i=0;i<n;i++){
            if((th[i] & x) == th[i])sum|=th[i];
            else{
                break;
            }
        }
        //cout<<sum;
        if(x==0)cout<<"Yes"<<endl;
        else if(sum==x)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        
    }
    return 0;
}