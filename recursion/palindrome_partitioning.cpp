#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool ispal(string &s,int idx,int i){
    while (idx<=i)
    {
        if(s[idx++]!=s[i--])return false;
    }
    return true;
}

void solve(int idx,string &s,vector<string> &v){
    if(idx==s.size()){
        for(auto it:v)
            cout<<it<<" ";
        cout<<endl;
        return;
    }
    for(int i=idx;i<s.size();i++){
        if(ispal(s,idx,i)){
            v.push_back(s.substr(idx,i-idx+1));
            solve(i+1,s,v);
            v.pop_back();
        }
    }
}

int main(){
    string s{"aabb"};
    vector<string> v;
    solve(0,s,v);
    return 0;
}