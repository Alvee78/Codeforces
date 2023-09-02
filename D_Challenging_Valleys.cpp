#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        vector<int>v;
        cin>>n>>x;
        v.push_back(x);
        for(int i=1;i<n;i++){
            cin>>x;
            if(x!=v.back())
                v.push_back(x);
        }
        int val = 0;
        for(int i=0 ; i<v.size() ; i++){
            if((i==0 || v[i]<v[i-1]) && (i== v.size()-1 || v[i]<v[i+1]))
                val++;
        }
        if(val == 1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}