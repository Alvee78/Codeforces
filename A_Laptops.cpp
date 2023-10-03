#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;

    int a,b;
    vector<pair<int,int>> v;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
                
    sort(v.begin(),v.end());
    bool flag = false;
    for(int i=0;i<t-1;i++){
        if(v[i].second>v[i+1].second){
            flag = true;
            break;
        }
    }

    if(flag){
        cout<<"Happy Alex"<<endl;
    }else{
        cout<<"Poor Alex"<<endl;
    }
    
    return 0;
}