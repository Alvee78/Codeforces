
#include<stdio.h>
#include<string.h>
 
int main(){
    int t,j=1,n,c=0,num;
    scanf("%d",&t);
 
    while(t--){
        scanf("%d",&num);int x=num%10;int y=(num%100)/10;
        if(x%10==9 && y%2==1 ){
            printf("%d %d\n",((num%10)/2)+1,(num-(num/2))+((num%10)/2));
        }
        else{
        
        printf("%d %d\n",num/2,num-(num/2));
        }
    }
    
    return 0;
}