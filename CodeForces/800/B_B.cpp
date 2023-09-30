#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long int arr[n],arr2[n+1];
        for(int i=0;i<n;i++){
            scanf("%lld",&arr[0]);
        }
        for(int i=0;i<n-1;i++){
            if(arr[i]==1){
                for(int i=0;arr[i+1]%arr2[i]!=0;i++){
                    arr[i]++;
                }
            }else if(arr[i+1]%arr2[i]==0){
                for(int i=0;arr[i+1]%arr2[i]!=0;i++){
                    arr[i]++;
                }
                arr2[i]=arr[i];
            }
        }
        arr2[n-1]=arr[n-1];
        for(int i=0;i<n;i++){
            printf("%lld ",arr[i]);
        }
    }
    return 0;
}