//228A - Is your horseshoe on the other hoof?	
#include<stdio.h>
 
int main(){
    int c=0;
    int arr[4];
    for(int i=0;i<4;i++)
        scanf("%d",&arr[i]);
   
    for(int i=0;i<3;i++){
        for(int j=i+1;j<4;j++){
            if(arr[i]==arr[j] && arr[i]!=0){
                c++;
                arr[j]=0;
            }
        }
    }
   printf("%d",c);
    
    return 0;
}