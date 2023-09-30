#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a[3];
    cin>>t;
    while (t--)
    {
        cin>>a[0]>>a[1]>>a[2];
        //sort(a,a+3);
        if(a[0]+a[1]==a[2]){
            cout<<"+"<<endl;
        }else{
            cout<<"-"<<endl;
        }

    }
    
    return 0;
}