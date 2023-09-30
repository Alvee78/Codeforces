#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,c=0,a=1;
    cin>>n;
    for(int i=0;i<33;i++){
        a=(a<<i);
       if((n&a)!=0){
        c++;
       }
       a=1;
    }
    cout<<c;
    return 0;
}