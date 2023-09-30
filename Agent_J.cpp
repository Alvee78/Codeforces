#include <bits/stdc++.h>
using namespace std;

int main() {
  int t,l,j=1;
  cin >> t ;
  while(t--){
    double a,b,c,area_t,area;
    cin >> a>>b>>c;
    area_t=sqrt((a+b+c)*(((a+b+c))-a-b)*(((a+b+c))-b-c)*(((a+b+c))-a-c));
    area_t-=.5*(a)*(a)*acos((((a+b)*(a+b))+((a+c)*(a+c))-((c+b)*(c+b)))/(2*(a+b)*(a+c)));
    area_t-=.5*(b)*(b)*acos((((a+b)*(a+b))+((b+c)*(b+c))-((c+a)*(c+a)))/(2*(a+b)*(b+c)));
    area_t-=.5*(c)*(c)*acos((((a+c)*(a+c))+((b+c)*(b+c))-((a+b)*(a+b)))/(2*(a+c)*(b+c)));
    
    cout<<"Case "<<j<<": "<< setprecision(10) << area_t<<endl;j++;
  }

  
  return 0;
}