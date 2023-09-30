#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,n;
    cin>>s>>n;
    int arr[n][2];
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1];
    }
    
    int tem;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i][0]>arr[j][0]){
                tem=arr[i][0];
                arr[i][0]=arr[j][0];
                arr[j][0]=tem;
                tem=arr[i][1];
                arr[i][1]=arr[j][1];
                arr[j][1]=tem;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(s>arr[i][0]){
            s+=arr[i][1];
        }else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}