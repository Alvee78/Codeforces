#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,sum=0;
    char ch[100][100];
    for(int i=0;i<a;i++){
        scanf("%s",ch[i]);
    }
    cout<<ch;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(ch[i][j]=='x'){
                sum++;
            }
    }
    }
    
    printf("%d",sum);
    return 0;
}