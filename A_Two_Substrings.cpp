#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string s;
    cin>>s;
    if((s.find("AB")<s.find("BA")) && (s.find("AB")<s.size() ) && ((s.find("BA")<s.size() )) )
    cout<<"YES";
    else cout<<"NO";
    return 0;
}