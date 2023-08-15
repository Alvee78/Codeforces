#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,m;
    cin>>n>>m;
    set<char>l;
    char s;
    for(int i=0;i<n*m;i++){
            cin>>s;
            l.insert(s);
    }
    auto it =l.begin();
    if(((l.find('W')!=l.end())+(l.find('B')!=l.end())+(l.find('G')!=l.end()))==l.size())cout<<"#Black&White ";
    else cout<<" #Color";
    return 0;
}