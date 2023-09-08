#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string f,s;
    cin>>f>>s;
    //cout<<f<<s;
    int x = (int)(f[0] - 'a') ;
    int y = (int)(f[1] - '0') ;
    int a = (int)(s[0] - 'a') ;
    int b = (int)(s[1] - '0') ;
    //cout<<x<<y<<a<<b;
    //int low = min ( abs( b-y ) , abs( a - x ));
    int high = max ( abs( b-y ) , abs( a - x ));
    cout<<high<<endl;
    while (high--)
    {
        if(a>x){
            cout<<'R';
            x++;
        }
        if(a<x){
            cout<<'L';
            x--;
        }
        if(b>y){
            cout<<'U';
            y++;
        }
        if(b<y){
            cout<<'D';
            y--;
        }
        cout<<endl;
    }
    
    return 0;
}