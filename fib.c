#include<stdio.h>

int main(){
    long long int a,b,c,n;
    scanf("%lld%lld%lld",&a,&b,&n);
    c=b-a;
    if(((n/3)%2)==0){
        if(n%3==0){
            if((-c)<0)
            printf("%lld",-c+1000000007);
            else
            printf("%lld",(-c)%1000000007);
        }else if((n%3)==1){
            if(a<0)
            printf("%lld",a+1000000007);
            else
            printf("%lld",a%1000000007);
        }else{
            if(b<0)
            printf("%lld",b+1000000007);
            else
            printf("%lld",b%1000000007);
        }
    }else{
        if(n%3==0){
            if(c<0)
            printf("%lld",c+1000000007);
            else
            printf("%lld",c%1000000007);
        }else if((n%3)==1){
            if((-a)<0)
            printf("%lld",-a+1000000007);
            else
            printf("%lld",(-a)%1000000007);
        }else{
            if((-b)<0)
            printf("%lld",-b+1000000007);
            else
            printf("%lld",(-b)%1000000007);
        }
    }
    return 0;
}