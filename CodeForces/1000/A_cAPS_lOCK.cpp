#include<bits/stdc++.h>
using namespace std;

int main(){
    char a[101];
    cin>>a;
    int c=0;
    for(int i=1;i<strlen(a);i++){
        if(islower(a[i])){
            c++;
        }
    }
    if((isupper(a[0])&&c==0)){
        strlwr(a);
        
    }else if((islower(a[0])&&c==0)){
        strlwr(a);
        a[0]-=32;
    }
    cout<<a;
    return 0;
}