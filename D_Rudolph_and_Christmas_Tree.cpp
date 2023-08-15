#include<bits/stdc++.h>
using namespace std;
#define ll long long

double b=0;
double area(double area ,double s,double h){
    double hi =0;
    if(b-s>0)hi=b-s;
    return area-(area * pow(hi/h,2));
}

int main(){
    int t;
    cin>>t;
    while(t--){
        double n,d,h,s;
        cin>>n>>d>>h;
        double area1,area2=0;
        area1 = .5 * d * h;
        for(int i=0;i<n;i++){
            cin>>s;
            area2 += area(area1,s,h);
            b=s+h;
        }
        cout<<setprecision(9)<<area2<<endl;

        b=0;
    }
    return 0;
}