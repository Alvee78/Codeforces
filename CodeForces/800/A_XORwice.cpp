#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a,b,x;
    cin>>t;
    while(t--){
        cin>>a>>b;
        x=0;
        int y=1;
        // for(int i=0;i<32;i++){
        //     if((a&(y<<i)==1)&&(b&(y<<i)==1)){
        //         x=x|(y<<i);
        //     }
        // }
        cout<<(a^b)<<endl;
    }
    return 0;
}