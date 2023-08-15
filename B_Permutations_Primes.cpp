#include<bits/stdc++.h>
using namespace std;
#define ll long long
// bool prime[200000+ 1];
// void SieveOfEratosthenes(int n)
// {
//     memset(prime, true, sizeof(prime));
  
//     for (int p = 2; p * p <= n; p++) {
        
//         if (prime[p] == true) {
//             for (int i = p * p; i <= n; i += p)
//                 prime[i] = false;
//         }
//     }
// }

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        v[0]=2;
        v[n-1]=3;
        v[n/2]=1;

        for(ll i=0,c=4;i<n;i++){
            if(i==0){
                cout<<v[0]<<" ";
                }
            else if(i==n-1){
                cout<<v[n-1]<<" ";}
            else if(i==n/2){
                cout<<v[n/2]<<" ";}
            else{
                cout<<c<<" ";
                c++;
            }
        }
        cout<<endl;
    }
    //cout<<prime[3]<<endl;
    return 0;
}