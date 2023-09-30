//A. Ultra-Fast Mathematician
#include<stdio.h>
#include<string.h>
int main(){
    char arr[101],arr2[101];
    scanf("%s%s",arr,arr2);
    for(int i=0;i<strlen(arr);i++){
        if(arr[i]==arr2[i])
            printf("0");
        else
            printf("1");
    }
    
    return 0;
}