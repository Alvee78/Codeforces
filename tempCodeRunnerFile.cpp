#include <stdio.h>

int main()
{
    int t,a,b,c;
   scanf("%d",&t);
    for(int k=1 ;k<=t;k++)
    {
        int min=10000000,max=0,mxi,mni,n,arr[1000]={0};
        
        scanf("%d",&n);
        char str[n][101];
        for(int i=1 ;i<=n ; i++){
            scanf("%s%d%d%d",str[i],&a,&b,&c);
            arr[i]=(a*b*c);
            if(arr[i]>max){
                max=arr[i];
                mxi=i;
            }
            if(arr[i]<min){
                min=arr[i];
                mni=i;
            }

        }
        
        if(max==min){
            printf("Case %d: no thief\n",k);
        }else{
            
            printf("Case %d: %s took chocolate from %s\n",k,str[mxi],str[mni]);
        }
       

    }
    return 0;
}