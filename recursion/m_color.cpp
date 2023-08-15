#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool ispossible(int node,int col,vector<int>&color,vector<vector<int>>&v){
    for(auto it: v[node]){
        if(color[it]==col)return false;
    }
    return true;
}

bool solve(int node,int n,int m,vector<int>&color,vector<vector<int>>&v){
    if(node==n)return true;
    for(int col=1;col<=m;col++){
        if(ispossible(node,col,color,v)){
             color[node]=col;
             if(solve(node+1,n,m,color,v)==true)return true;
             color[node]=0;
        }  
    }
    return false;
}

int main(){
    vector<vector<int>>v{{1,2,3},{0,2},{0,1,3},{0,2}};
    int n=4;
    vector<int>color(n,0);
    cout<<solve(0,n,3,color,v)<<endl;
    for(auto i:color)cout<<i<<" ";
    return 0;
}