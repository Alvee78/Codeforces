#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    char str[5];
    while (t--)
    {
        cin>>str;
        int arr[10]={0};
        for(int i=0;i<4;i++){
            arr[str[i]-48]++;
        }
        int c=0;
        for(int i=0;i<10;i++){
            if(arr[i]>c){
                c=arr[i];
            }
        }
        if(c==4){
            cout<<"-1"<<endl;
        }
        else if(c==3){
            cout<<"6"<<endl;
        }else{
            cout<<"4"<<endl;
        }
    }
    
    return 0;
}