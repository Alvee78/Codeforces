#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int m = n * (n-1)/2;
        int arr[m];
        for(int i=0;i<m;i++){
            cin>>arr[i];
        }
        sort(arr,arr+m);
        for(int i=0;i<m;i+=n){
            cout<<arr[i]<<" ";
            n--;
        }
        cout<<1000000000<<endl;
    }
    return 0;
}