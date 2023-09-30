#include <stdio.h>

int main()
{
    int n1,j;
    scanf("%d", &n1);
    for(j=1;j<=n1;j++){
        int a=0, b=900000000,i,n,x,y,z;
        scanf("%d",&n);
        char name[n][100];
        int ara[n],m,k;
        for(i=0;i<n;i++){
            scanf("%s",name[i]);
            scanf("%d %d %d",&x,&y,&z);
            ara[i] = x*y*z;
            if(ara[i]<b)
            {
                b= ara[i];
                m = i;
            }
            if(ara[i]>a)
            {
                a= ara[i];
                k = i;
            }
        }
    
        if(b == a){
            printf("Case %d: no thief\n",j);
        }else{
            printf("Case %d: %s took chocolate from %s\n",j,name[k],name[m]);
        }
    }
    return 0;
}