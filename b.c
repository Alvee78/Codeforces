#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ty;
    long long int t,op,j=1,n,num,temp,wh;
    scanf("%lld", &t);
 
    while (t--)
    {
        printf("Case %lld:\n",j);
        scanf("%lld%lld", &n ,&op);
        long long int arr[n];
        for(int i=0;i<n;i++)
            scanf("%lld",&arr[i]);
        while (op--)
        {
            scanf("%c",&ty);
            if(ty=='S'){
                scanf("%lld",&num);
                for(int i=0;i<n;i++)
                    arr[i]+=num;
            }
            else if(ty=='M'){
                scanf("%lld",&num);
                for(int i=0;i<n;i++)
                    arr[i]*=num;
            }
            else if(ty=='D'){
                scanf("%lld",&num);
                for(int i=0;i<n;i++)
                    arr[i]/=num;
            }
            else if(ty=='P'){
                scanf("%lld",&num);
                scanf("%lld",&wh);
                temp=arr[wh];
                arr[wh]=arr[num];
                arr[num]=temp;
            }
            else if(ty=='R'){
                for(int i=0;i<n/2;i++){
                    temp=arr[i];
                    arr[i]=arr[n-1-i];
                    arr[n-1-i]=temp;
                }
                
            }
        }
        
        for(int i=0;i<n;i++)
        printf("%lld\n",arr[i]);
        printf("\n");
        j++;
    }
   
    return 0;
}