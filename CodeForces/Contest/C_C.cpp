#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,s,n;
    cin>>t;
    char a[101];
    while (t--)
    {
        cin>>s>>a;
        if((a[0]!='m'&&a[0]!='M')||(a[s-1]!='w'&&a[s-1]!='W')){
            cout<<"NO"<<endl;
            continue;
        }
        int m=1,n=0,o=0,p=0,tr=0;
        for(int i=0;i<s;i++){
            if((a[i]=='m'||a[i]=='M')&&m==1){
                n=1;
                //cout<<4;
                continue;
            }else if((a[i]=='e'||a[i]=='E')&&n==1){
                m=0;
                o=1;
                continue;
            }else if((a[i]=='o'||a[i]=='O')&&o==1){
                n=0;
                p=1;
                continue;
            }else if((a[i]=='w'||a[i]=='W')&&p==1){
                o=0;
                continue;
            }else{
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