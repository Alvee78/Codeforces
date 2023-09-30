#include<stdio.h>
#include<math.h>
int main(){
    long long int t,j=1,a,b,c=1,p=0;
    long long int n;
    scanf("%lld",&t);

    while(t--){
        
        p=0;
        long long int index =-1;
       scanf("%lld",&n);
      
       if(n&c)
       a=1;
       else
       a=0;
       
       for(int i=1;i<64;i++){
        
        if(n&(c<<i))
       b=1;
       else
       b=0;
        if(a==1)
        p++;
        if( a==1 && b==0 ){
            n+=pow(2,(i-1));
            p--;
            for(int y=0;y<p;y++){
                n=n|(c<<y);
            }
            for(int z=p; z<i-1;z++){
                n=n&(~(c<<z));
            }
                
            i=64;
        }
        
        a=b;
       }
       
       printf("Case %lld: %lld\n",j,n);
        
       j++;
    }
  
    return 0;
}