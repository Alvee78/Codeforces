#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isSafe(int i,int j,vector<vector<char>>&v,char k){
    for(int c=0;c<9;c++){
        if(v[i][c]==k)return false;
        if(v[c][j]==k)return false;
        if(v[((i/3)*3)+c/3][((j/3)*3)+c%3]==k)return false;
    }
    return true;
}

bool soduco(vector<vector<char>>&v){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(v[i][j]=='.'){
                for(char k='1';k<='9';k++){
                    if(isSafe(i,j,v,k)){
                        v[i][j]=k;
                        if(soduco(v)==true)return true;
                        else v[i][j]='.';
                    }
                }
                return false;
            }
        }
    }
    return true;
}

int main(){
    vector<vector<char>>v={{'5','3','.','.','7','.','.','.','.'},{'6','.','.','1','9','5','.','.','.'},{'.','9','8','.','.','.','.','6','.'},{'8','.','.','.','6','.','.','.','3'},{'4','.','.','8','.','3','.','.','1'},{'7','.','.','.','2','.','.','.','6'},{'.','6','.','.','.','.','2','8','.'},{'.','.','.','4','1','9','.','.','5'},{'.','.','.','.','8','.','.','7','9'}};
    soduco(v);
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}