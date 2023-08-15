#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll ax,ay;
        cin>>ax>>ay;
        ll bx,by;
        cin>>bx>>by;
        ll cx,cy;
        cin>>cx>>cy;
        ll ab,ac,bc;
        ab=abs(ax-bx)+abs(ay-by);
        ac=abs(ax-cx)+abs(ay-cy);
        bc=abs(bx-cx)+abs(by-cy);
        cout<<(ab+ac-bc)/2+1<<endl;
    }
    return 0;
}