#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,arr[100000];
    cin>>n;
    arr[0]=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        arr[i]+=arr[i-1];
    }
    int t;
    cin>>t;
    while (t--)
    {
        int m,n;
    cin>>m>>n;
    cout<<arr[n+1]-arr[m]<<endl;
    }
    
    
    
    return 0;
}