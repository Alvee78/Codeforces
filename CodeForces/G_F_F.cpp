#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct str
{
    string a;
    string b;
};


int main(){
    int m,n;
    cin>>m>>n;
    struct str st[m];
    for(int i=0;i<m;i++){
        cin>>st[i].a>>st[i].b;
    }
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        for(int i=0;i<m;i++){
            if(st[i].a==s){
                cout<<st[i].b<<" ";
                break;
            }
        }
    }
    
    return 0;
}

