#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t1;
    cin>>t1;
    while(t1--){
        float px,py,ax,ay,bx,by,ab,ap,bp,ao,bo;
        cin>>px>>py>>ax>>ay>>bx>>by;
        ab = sqrt(pow(ax-bx,2)+pow(ay-by,2));
        ap = sqrt(pow(ax-px,2)+pow(ay-py,2));
        bp = sqrt(pow(bx-px,2)+pow(by-py,2));
        ao = sqrt(pow(ax,2)+pow(ay,2));
        bo = sqrt(pow(bx,2)+pow(by,2));
        
        double w = ab/2;
        double d = max(min(ap,bp),min(ao,bo));

        if(d>w){
            w += d - w;
        }
        cout<< setprecision(9)<< w << endl;
    }
    return 0;
}