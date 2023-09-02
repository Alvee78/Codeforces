#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n),vec;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }vec.push_back(v[0]);
        for(int i=1;i<n;i++){
            if(v[i]<v[i-1]){
               vec.push_back(v[i]); 
            }vec.push_back(v[i]);
        }
        cout<<vec.size()<<endl;
        for(auto x:vec){
            cout<<x<<" ";
        }cout<<endl;
    }
    
    return 0;
}