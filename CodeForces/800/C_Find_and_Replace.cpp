#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    char str[2002];
    while (t--)
    {
        int a[127]={0},a2[127]={0};
        cin>>n;
        cin>>str;
        int tr=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                a[str[i]]++;
            }else{
                a2[str[i]]++;
            }
        }
        for(int i=95;i<127;i++){
            if(a[i]>0&&a2[i]>0){
                tr=1;
               break; 
            }
        }
        if(tr==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}