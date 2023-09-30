#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int ti;
    cin>>ti;
    while(ti--){
        long long int n;
        cin>>n;
        long long arr[n];
        int min=100001,max=0,c1=0,c2=0;
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        unordered_map<long long int,long long int> m;
        for(auto i:arr){
            m[i]++;
        }
        if(m[arr[0]]==n){
            cout<<n*(n-1)<<endl;
        }
        else{
            long long int a=m[arr[0]];
            long long int b=m[arr[n-1]];
            cout<<a*b*2<<endl;
        }
    }
    return 0;
}