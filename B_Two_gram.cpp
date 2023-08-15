#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<string,int>m;
    for(int i=0;i<n-1;i++){
        string a;
        a=s[i];
        a+=s[i+1];
        m[a]++;
    }
    // for(auto e:m){
    //     cout<<e.first<<" "<<e.second<<endl;
    // }
    int mx=0;
    string aa;
    for(auto i:m){
        if(i.second>mx){
            mx=i.second;
            aa=i.first;
        }
    }
    cout<<aa;
    return 0;
}