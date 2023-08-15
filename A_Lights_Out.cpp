#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool ispos(int i,int j){
    if(i<=2 && j<=2 && i>=0 && j>=0){
        return true;
    }
    return false;
}

void ch(int i,int j,vector<vector<bool>>&v){
     v[i][j]=!v[i][j];
}

void solve(ll n,vector<vector<bool>>&v,int i,int j){
    if(n%2){
        //if(ispos(i-1,j-1))ch(i-1,j-1,v);
        if(ispos(i,j-1))ch(i,j-1,v);
        if(ispos(i-1,j))ch(i-1,j,v);
        //if(ispos(i+1,j+1))ch(i+1,j+1,v);
        if(ispos(i+1,j))ch(i+1,j,v);
        if(ispos(i,j+1))ch(i,j+1,v);
        //if(ispos(i+1,j-1))ch(i+1,j-1,v);
        //if(ispos(i-1,j+1))ch(i-1,j+1,v);
        ch(i,j,v);
    }
}

int main(){
    vector<vector<bool>>v(3,vector<bool>(3,true));
    ll n;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>n;
            solve(n,v,i,j);
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<v[i][j];
        }
        cout<<endl;
    }
    return 0;
}