#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool IsSafe(int row,int col,vector<string>&v,int n){
    int r=row;
    int c=col;
    while (row>=0 and col>=0)
    {
        if(v[row][col]=='Q')return false;
        row--;
        col--;
    }
    row=r;
    col=c;
    while (col>=0)
    {
        if(v[row][col]=='Q')return false;
        col--;
    }
    row=r;
    col=c;
    while (row<n and col>=0)
    {
        if(v[row][col]=='Q')return false;
        row++;
        col--;
    }

    return true;

}

void n_queen(int idx,int n,vector<string>&v){
    if(idx==n){
        for(int j=0;j<n;j++){
            cout<<v[j]<<endl;
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        if(IsSafe(i,idx,v,n)){
            v[i][idx]='Q';
            n_queen(idx+1,n,v);
            v[i][idx]='-';
        }
    }
}

int main(){
    vector<string>v;
    int n=4;
    string s(n,'-');
    for(int i=0;i<n;i++){
        v.push_back(s);
    }
    n_queen(0,n,v);
    return 0;
}