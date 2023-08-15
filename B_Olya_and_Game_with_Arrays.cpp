#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,s;
        cin>>n;
        vector<ll>sml,ssml;
    
        for(int i=0;i<n;i++){
            ll m,mn=INT64_MAX,smn=INT64_MAX;
            cin>>m;
            for(int j=0;j<m;j++){
                cin>>s;
                if(mn>=s){
                    smn = mn;
                    mn = s;
                }else if(smn > s){
                    smn = s;
                }
            }
            sml.push_back(mn);
            ssml.push_back(smn);
        }
        ll li=INT64_MAX,li2=INT64_MAX;
        for(auto i:sml){
            if(li>i)li=i;
        }
        ll ans = 0;
        for(auto i:ssml){
            if(li2>i)li2=i;
            ans+=i;
        }
        cout<<ans-li2+li<<endl;
        

    }
    return 0;
}