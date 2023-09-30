#include<bits/stdc++.h>
using namespace std;

int main(){
    double a,x,y,m,n;
    cin>>x>>y>>m>>n;
    cout<< setprecision(17)<<sqrt(pow((x-m),2)+pow((y-n),2));
    return 0;
}