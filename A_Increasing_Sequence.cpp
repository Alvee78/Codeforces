#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            if(i==0){
                if(a==1){
                    b = 2;
                }else{
                    b = 1;
                }
            }else{
                if(a==b+1){
                    b += 2;
                }else{
                    b += 1;
                }
            }
        }
        cout<<b<<endl;
    }
    return 0;
}