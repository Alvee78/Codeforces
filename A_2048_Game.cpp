#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;  cin>>n;
        bool flag = false;
        int store;
        int sum = 0;
        for(int i=0;i<n;i++){
            cin>>store;
            if(store == 2048){
                flag = true;
            }
            if(store<2048){
                sum += store;
            }
        }
        cout<<((flag || sum>=2048)?"YES":"NO")<<endl;
        
    }
    return 0;
}