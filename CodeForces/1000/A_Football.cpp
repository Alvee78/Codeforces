#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=1,b=0,t;
    cin>>t;
    t--;
    string str1,str2,str;
    cin>>str1;
    
    while (t--)
    {
        cin>>str;
        if(str==str1){
            a++;
        }else{
            str2=str;
            b++;
        }
    }
    a>b?cout<<str1:cout<<str2;
    
    return 0;
}
