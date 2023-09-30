//705A - Hulk
#include<stdio.h>
 
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n-1;i++){
        if(i%2==0)
            printf("I hate that ");
        else
            printf("I love that ");
    }
    if(n%2==1)
            printf("I hate it ");
        else
            printf("I love it ");
    
    return 0;
}