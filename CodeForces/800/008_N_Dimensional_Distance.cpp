#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    double x,y,sum=0;
    cin>>t;
    
    while (t--)
    {
        cin>>x>>y;
        sum+=pow(x-y,2);
    }
    cout<<setprecision(10)<<sqrt(sum);
    
    
    return 0;
}