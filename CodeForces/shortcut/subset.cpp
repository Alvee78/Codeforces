#include<bits/stdc++.h>
using namespace std;

void subset(int arr[],int n){
    int t=pow(2,n);
    int a=1;
    for(int i=0;i<t;i++){
        for(int j=0;j<n;j++){
            if((i & (a<<j))!=0){
                cout<<arr[j]<<" ";
            }
        }cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    int t=pow(2,n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    subset(arr,n);

    return 0;
}