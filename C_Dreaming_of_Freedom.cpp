#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e6+5;
 
int lowest_divisor[N];

void precal(){
    for(int i=0;i<=N;i++){
        lowest_divisor[i]=i;
    }

    for(int i=2;i*i<=N;i++){
        if(lowest_divisor[i]==i){
            for(int j=i*i;j<=N;j+=i){
                if(lowest_divisor[j]==j) lowest_divisor[j] = i;
            }
        }
    }
}

void solve(){
    int n, m; cin>>n>>m; (n!=1 && m>=lowest_divisor[n])? cout<<"NO"<<endl: cout<<"YES"<<endl;
}
int main(){
    precal();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}