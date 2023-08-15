#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool IsSafe(int row,int col,vector<string>&v,int n,vector<vector<int>>&c){

  
        if(c[0][row]==0)return false;
        if(c[1][col+row]==0)return false;
        if(c[2][n-1-row+col]==0)return false;
       

    return true;

}

void n_queen(int idx,int n,vector<string>&v,vector<vector<int>>&c){
    if(idx==n){
        for(int j=0;j<n;j++){
            cout<<v[j]<<endl;
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        if(IsSafe(i,idx,v,n,c)){

            v[i][idx]='Q';
            c[0][i]=0;
            c[1][idx+i]=0;
            c[2][n-1-i+idx]=0;
            n_queen(idx+1,n,v,c);
            v[i][idx]='-';
            c[0][i]=1;
            c[1][idx+i]=1;
            c[2][n-1-i+idx]=1;
        }
    }
}

int main(){
    vector<string>v;
    int n=4;
    vector<vector<int>>c(3);
    vector<int>d(n,1);
    c[0]=d;
    c[1]=d;
    c[2]=d;
    string s(n,'-');
    for(int i=0;i<n;i++){
        v.push_back(s);
    }
    n_queen(0,n,v,c);
    return 0;
}