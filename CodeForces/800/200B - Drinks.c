//200B - Drinks
#include<stdio.h>

int main(){
    int n;
    float a,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    scanf("%f",&a);
    sum+=a;
    }
    printf("%f",1.0*((sum/n)));
    return 0;
}