#include<bits/stdc++.h>
using namespace std;

int main(){
    int h=0,yes=0;
    char str[101];
    cin >>str;
    for(int i=0;i<strlen(str);i++){
        if(h==0&&str[i]=='h'){
            h=1;
        }else if (h==1&&str[i]=='e'){
            h+=1;
        }else if (h==2&&str[i]=='l'){
            h+=1;
        }else if (h==3&&str[i]=='l'){
            h+=1;
        }else if (h==4&&str[i]=='o'){
            h+=1;
            yes=1;
        }
    }
    if(yes==1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}