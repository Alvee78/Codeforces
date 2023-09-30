#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t,i=1;
    double h,p,r1,r2;
    cin>>t;
    while (t--)
    {
        cin>>r1>>r2>>h>>p;
        
        double nr,pi=acos(-1);
        nr=(((r1-r2)*p)/h);
        nr+=r2;
        cout<<"Case "<<i<<": "<<setprecision(10)<<(pi/3)*p*(nr*nr + r2*r2 + nr*r2)<<endl;
        i++;
    }
    
    return 0;
}
