#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll a,b,c,x,y,z;
    cin>>a>>b>>c>>x>>y>>z;
    ll ar[3];
    ar[0]=a*x;
    ar[1]=b*y;
    ar[2]=c*z;
    ll t=*max_element(ar,ar+3);
    if(t==ar[0])cout<<"Barley"<<" ";
    if(t==ar[1])cout<<"Hops"<<" ";
    if(t==ar[2])cout<<"Malt"<<" ";
    return 0;
}
