#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool triangle(int a,int b,int c)
{
  return ((a+b>c)&&(a+c>b)&&(b+c>a));
}
 
bool segment(int a,int b,int c)
{
  return ((a==b+c)||(b==a+c)||(c==a+b));
}


int main(){
    int a,b,c,d;

    cin>>a>>b>>c>>d;
    bool normal=false;
    bool deg=false;
    normal=normal||(triangle(a,b,c));
    normal=normal||(triangle(a,b,d));
    normal=normal||(triangle(a,c,d));
    normal=normal||(triangle(b,c,d));
    
    
    deg=deg||(segment(a,b,c));
    deg=deg||(segment(a,b,d));
    deg=deg||(segment(a,c,d));
    deg=deg||(segment(b,c,d));
    
    if(normal)
        cout<<"TRIANGLE"<<endl;
    else if(deg)
        cout<<"SEGMENT"<<endl;
    else
        cout<<"IMPOSSIBLE"<<endl;
    
    return 0;
}