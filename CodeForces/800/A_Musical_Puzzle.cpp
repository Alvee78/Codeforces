#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        set<pair<char,char>>s;
        int n;
        cin>>n;
        string str;
        cin>>str;
        for(int i=0;i<n-1;i++){
            char a,b;
            a=str[i];
            b=str[i+1];
            s.insert({a,b});
        }
    cout<<s.size()<<endl;
    }
    
    return 0;
}
/*
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░███░░░█░░░█░░░░░░░█░█████░█████░░░░
░░░░░██░░░██░█░░░░█░░░░░█░░█░░░░░█░░░░░░░░
░░░░░█░░░░░█░█░░░░██░░░██░░█░░░░░█░░░░░░░░
░░░░░█░░░░░█░█░░░░░█░░░█░░░███░░░███░░░░░░
░░░░░███████░█░░░░░░█░█░░░░█░░░░░█░░░░░░░░
░░░░░█░░░░░█░█░░░░░░█░█░░░░█░░░░░█░░░░░░░░
░░░░░█░░░░░█░█████░░░█░░░░░█████░█████░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
*/