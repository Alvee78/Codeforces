#include<stdio.h>
#include<math.h>
int main(){
    int t;
    int a;
     scanf("%d",&t);
    for(int j=1;j<=t;j++){
       scanf("%d",&a);
       int y=log10(a)+1;
         printf("%d\n",y);
    }
    return 0;
}
