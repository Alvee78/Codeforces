#include<bits/stdc++.h>
using namespace std;

int main(){
    char str[101];
    cin>>str;
    strlwr(str);
    for(int i= 0;i<strlen(str);i++){
        if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='y'){
            cout<<"."<<str[i];
        }
    }
}