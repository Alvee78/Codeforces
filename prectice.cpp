#include<bits/stdc++.h>
using namespace std;
#define ll long long

void recursion(int i,int j,int n,vector<vector<int>> &mat,string &s,vector<string>&ans, vector<vector<int>> & vis){
    if(i==n-1 && j == n-1){
        ans.push_back(s);
        return;
    }
    //downward
    if(isSafe(i,j+1,n,vis,mat)){
        vis[i][j]=1;
        s.push_back('D');
        recursion( i,  j+1,  n, mat, s,  ans ,vis);
        s.pop_back();
        vis[i][j]=0;
    }
    //left
    if (isSafe(i - 1, j, n, vis, mat)) {
        vis[i][j] = 1;
        s.push_back('L');
        recursion(i - 1, j, n, mat, s, ans, vis);
        s.pop_back();
        vis[i][j] = 0;
    }
    //right
    if (isSafe(i + 1, j, n, vis, mat)) {
        vis[i][j] = 1;
        s.push_back('R');
        recursion(i + 1, j, n, mat, s, ans,vis);
        s.pop_back();
        vis[i][j] = 0;
    }
    //upward
    if (isSafe(i , j-1, n, vis, mat)) {
        vis[i][j] = 1;
        s.push_back('U');
        recursion(i , j - 1, n, mat, s, ans,vis);
        s.pop_back();
        vis[i][j] = 0;
    }

}
bool isSafe(int i,int j,int n,vector<vector<int>> &vis,vector<vector<int>> &mat){
    if(i>=0 && j>=0 && i<n && j<n && mat[i][j] && !vis[i][j]){
        return true;
    }else return false;
}

vector<string> ans;

vector<string> ratMaze(vector<vector<int>> &mat) {
    
    int n=mat.size();
    vector<vector<int>> vis(n,vector<int>(n,0));
    string s;
    if(mat[0][0]==1)recursion(0,0,n,mat,s,ans,vis);
    return ans;
}





int main(){
    vector<pair<ll,ll>>v(3);
    v[0].first=9;
    v[1].first=5;
    v[2].first=8;
    v[0].second=2;
    v[1].second=1;
    v[2].second=3;
    sort(v.begin(),v.end());
    for(auto i:v)cout<<i.first<<" "<<i.second<<endl;
    return 0;
}