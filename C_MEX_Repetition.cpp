#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll a[n+1] , b[n+1]={0};
        ll sum = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            //sum += a[i];
            b[a[i]] = 1;
        }
        for(int i=0;i<n+1;i++){
            if(b[i]==0){
                a[n]=i;
                break;
            }
        }
        //a[n] = (n*(n+1)/2) - sum;
        k = k % (n+1);
        //cout<<a[n];
        for(int i=0;i<n;i++){
            cout<<a[(n-k+1+i)%(n+1)]<<" ";
        }
        cout<<endl;
    }
    return 0;
}