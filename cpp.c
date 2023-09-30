#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    long long int t;
    scanf("%lld",&t);
    for (int i=1 ; i<=t ; i++){
        char str[1001],str2[1001];
        int arr[127]={0},arr2[127]={0},c=0;
        scanf(" %[^\n]s",str);
        scanf(" %[^\n]s",str2);
        for(int j=0;j<strlen(str);j++){
            if(str[i]<97){
                arr[str[i]+32]++;
            }else{
                arr[str[i]]++;
            }
        }
        for(int j=0;j<strlen(str2);j++){
            if(str2[i]<97){
                arr2[str2[i]+32]++;
            }else{
                arr2[str2[i]]++;
            }
        }
        for(int j=97;j<123;j++){
            if(arr[i]!=arr2[j]){
                c=1;
            }
        }
        if(c==1){
            printf("Case %lld: No\n",i);
        }else{
            printf("Case %lld: Yes\n",i);
        }
    }return 0;
}