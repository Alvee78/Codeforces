#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int j=1;j<=t;j++){
        int a,b,c,k;
        cin>>a>>b>>c>>k;
        int sum=a+b+c;
        if(sum%3!=0){
            cout<<"Case "<<j<<": Fight"<<endl;
            continue;
        }
        int e=sum/3;
        if(abs(e-a)%k==0&&abs(e-b)%k==0&&abs(e-c)%k==0){
            cout<<"Case "<<j<<": Peaceful"<<endl;
        }
        else cout<<"Case "<<j<<": Fight"<<endl;

    }
    return 0;
}
