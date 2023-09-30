#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    char s[5];
    cin>>t;
    while (t--)
    {
        cin>>s;
        cout<<((s[0]-49)*10)+(strlen(s)*(strlen(s)+1))/2<<endl;

    }
    
    return 0;
}