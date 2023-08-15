#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a,b;
        vector<pair<int,int>>v;
        for(int i=1;i<=n;i++){
            cin>>a>>b;
            if(a<=10){
                v.push_back({b,i});
            }
        }
        sort(v.begin(),v.end());
        cout<<v[v.size()-1].second<<endl;
    }
    return 0;
}