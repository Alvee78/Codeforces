#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t,a,b,x,y;
    cin>>t;
    while (t--)
    {
        cin>>x>>y>>a>>b;
        cout<<min((abs(x-y)*a)+(min(x,y)*b),((x+y)*a))<<endl;
    }
    
    return 0;
}