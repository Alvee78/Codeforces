
#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
char solve(vector<string>&v){
    if(v[0][0]==v[0][1] && v[0][1]==v[0][2] &&v[0][2]!='.')return v[0][0];
    else if(v[1][0]==v[1][1] && v[1][1]==v[1][2] && v[1][2]!='.')return v[1][0];
    else if(v[2][0]==v[2][1] && v[2][1]==v[2][2] && v[2][2]!='.')return v[2][0];
    else if(v[0][0]==v[1][0] && v[1][0]==v[2][0] && v[2][0]!='.')return v[0][0];
    else if(v[0][1]==v[1][1] && v[1][1]==v[2][1] && v[2][1]!='.')return v[0][1];
    else if(v[0][2]==v[1][2] && v[1][2]==v[2][2] && v[2][2]!='.')return v[0][2];
    else if(v[0][0]==v[1][1] && v[1][1]==v[2][2] && v[2][2]!='.')return v[1][1];
    else if(v[0][2]==v[1][1] && v[1][1]==v[2][0] && v[2][0]!='.')return v[0][2];
    else return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
         vector<string>v(3);
    cin>>v[0]>>v[1]>>v[2];
    char a=solve(v);
    if(a)cout<<a<<endl;
    else cout<<"DRAW"<<endl;
    }
   
    return 0;
}

