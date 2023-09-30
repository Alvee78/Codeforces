#include<stdio.h>
int main(){
    char key[101];
    int t,n,check=1;
    scanf("%d",&t);
    for(int i = 0; i<t; i++){
        check=1;
        scanf("%d",&n);
        for(int j=1;j<n;j+=3){
            if(key[j]!=key[j+1]){
                printf("NO\n");
                check=0;
            }

        }
        if(check==0)
            continue;
        printf("YES\n");
    }

return 0;
}
