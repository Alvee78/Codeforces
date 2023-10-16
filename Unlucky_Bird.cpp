#include <bits/stdc++.h>
using namespace std;

int main() {
  int t,l,j=1;
  cin >> tt ;
  while(tt--){
    double  v1, v2, v3, a1, a2 ;
    cin >>  v1 >> v2 >> v3 >> a1 >> a2 ;
    double t1=v1/a1;
    double t2=v2/a2;
    double d=(v1*t1)-(.5*a1*t1*t1)+(v2*t2)-(.5*a2*t2*t2);
    t1>=t2?t1=t1:t1=t2;
    t1=t1*v3;
    cout<<"Case "<<j<<": "<< fixed <<setprecision(10) << d <<" "<< setprecision(10) <<t1 <<endl;j++;
  }

  
  return 0;
}