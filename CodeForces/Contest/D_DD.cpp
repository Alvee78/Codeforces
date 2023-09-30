#include<bits/stdc++.h>
using namespace std;
#define ll long long



int main(){
ll a5[31],a3[45],n;
cin>>n;
a5[0]=1;
a3[0]=1;
for(int i=0;i<27;i++){
    a5[i]=a5[i-1]*5;
}
for(int i=0;i<45;i++){
    a3[i]=a3[i-1]*3;
}
for(int i=0;i<25;i++)
{
    for(int j=0;j<40;j++){
        if(a5[i]+a3[j]==n){
            cout<<j<<" "<<i;
            return 0;
        }
    }
}
    cout<<"-1";
    return 0;
}