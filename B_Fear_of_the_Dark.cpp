#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t1;
    cin>>t1;
    while(t1--){
        double px,py,ax,ay,bx,by,ab,ap,bp,ao,bo;
        cin>>px>>py>>ax>>ay>>bx>>by;
        ab = sqrt(pow(ax-bx,2)+pow(ay-by,2));
        ap = sqrt(pow(ax-px,2)+pow(ay-py,2));
        bp = sqrt(pow(bx-px,2)+pow(by-py,2));
        ao = sqrt(pow(ax,2)+pow(ay,2));
        bo = sqrt(pow(bx,2)+pow(by,2));
        double w = ab/2;
        double d1 = min((max(ap,ao)),max(bp,bo));
        double d2 = min(max(w,max(ap,bo)),max(w,max(ao,bp)));
        cout<<setprecision(10)<< fixed <<min(d1,d2)<<endl;
    }
    return 0;
}