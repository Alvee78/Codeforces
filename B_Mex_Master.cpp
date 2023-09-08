#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        int zero = 0;
        int one = 0;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x == 0){
                zero ++;
            }else if(x == 1) {
                one ++;
            }
        }
        if(zero <= (n+1)/2){
            cout<<0<<endl;
        }else if((n-zero-one)>0 || zero == n){
            cout<<1<<endl;
        }else{
            cout<<2<<endl;
        }
    }
    return 0;
}