#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t,j=1;
    cin >>t;
    while(t--){
    double a,b,c,ta,area;
    cin >> a>>b>>c;
    ta=sqrt((a+b+c)*(((a+b+c))-a-b)*(((a+b+c))-b-c)*(((a+b+c))-a-c));
    ta-=.5*(a)*(a)*acos((((a+b)*(a+b))+((a+c)*(a+c))-((c+b)*(c+b)))/(2*(a+b)*(a+c)));
    ta-=.5*(b)*(b)*acos((((a+b)*(a+b))+((b+c)*(b+c))-((c+a)*(c+a)))/(2*(a+b)*(b+c)));
    ta-=.5*(c)*(c)*acos((((a+c)*(a+c))+((b+c)*(b+c))-((a+b)*(a+b)))/(2*(a+c)*(b+c)));
    
    cout<<"Case "<<j<<": "<<setprecision(10) << ta<<endl;j++;
  }
    return 0;
}
