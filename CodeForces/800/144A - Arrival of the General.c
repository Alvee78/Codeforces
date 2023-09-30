//144A - Arrival of the General		
#include<stdio.h>
 
int main(){
    int n,max=0,min=0,k,l;
    scanf("%d",&n);
    int arr[n];
        scanf("%d",&arr[0]);
        min=arr[0];
        max=arr[0];
        for(int i=1;i<n;i++){
         scanf("%d",&arr[i]);
         if(max<arr[i])
            {
                max=arr[i];
                k=i;
            }
        if(min>=arr[i])
            {
                min=arr[i];
                l=i;
            }
        }
        if(k<l)
        printf("%d",k+n-1-l);
        else
        printf("%d",k+n-1-l-1);
    
    
    return 0;
}