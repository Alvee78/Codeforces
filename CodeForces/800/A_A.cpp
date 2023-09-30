#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k;
    char str[100001];
    cin>>t;
    while(t--){
        cin>>n>>k;
        int c=0;
        int arr[2300]={0};
        cin>>str;
        for(int i=0;i<n;i++){
            arr[str[i]]++;
        }
        int a=65;
        
        int min;
        for(int i=0;i<100;i++){
            if(arr[a+i]>0 && arr[a+32+i]>0)
            {
                if(arr[a+i]>=arr[a+32+i]>0){
                    min=arr[a+32+i];
                    arr[a+32+i]=0;
                    arr[a+i]-=arr[a+32+i];
                    if(arr[a+i]>=2*k){
                        c+=k;
                    }else{
                        c+=arr[a+i]/2;
                    }
                    
                }else{
                    min=arr[a+i];
                    arr[a+i]=0;
                    arr[a+32+i]-=arr[a+i];
                    if(arr[a+32+i]>=2*k){
                        c+=k;
                    }else{
                        c+=arr[a+32+i]/2;
                    }
                }
                c+=min;
                
                
            }
            
        }

    cout<<c<<endl;
    }
    return 0;
}