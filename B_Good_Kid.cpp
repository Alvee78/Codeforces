#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        // if(a[0] == 0){
        //     a[0] = 1;
        // }else {
            
        // }
        a[0]++;
        for(int i=1;i<n;i++){
            a[i] *= a[i-1];
        }
        cout<<a[n-1]<<endl;
    }
    return 0;
}