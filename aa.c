#include<stdio.h>
int e,c=0;

int escape(int i ,int j,int e,int n,int arr[n][n]);
void main() {
    int n;
    scanf("%d",&n);
    int arr[n][n];
    //scan array of a matrix:::
    for(int i=0; i<n ; i++){
        for(int j=0; j<n ;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //scan index which want to escape:::
    int i,j;
    scanf("%d%d",&i,&j);
    if(arr[i][j]==0)
        e=0;
    else
        e=1;
    
    if(i==0 || j==0 || i==n-1 || j==n-1)
        printf("No need to escape");
    
    printf("%d",escape(i,j,e,n,arr));
}

int escape(int i, int j, int e,int n,int arr[n][n]){
    int u,u2,r,r2,l,l2,d,d2;
    if((i==0 || j==0 || i==n-1 || j==n-1)&& arr[j][j]==e){
        c++;
        return c;
    }
    //up
    u=i-1;
    u2=j;
    if(arr[u][u2]==e && u>=0 && u<n && u2>=0 && u2<n )
        escape(u,u2,e,n,arr);
    //right
    r=i;
    r2=j+1;
    if(arr[r][r2]==e && r>=0 && r<n && r2>=0 && r2<n )
        escape(r,r2,e,n,arr);
    //left
    l=i;
    l2=j+1;
    if(arr[l][l2]==e && l>=0 && l<n && l2>=0 && l2<n )
        escape(l,l2,e,n,arr);
    //down
    d=i+1;
    d2=j;
    if(arr[d][d2]==e && d>=0 && d<n && d2>=0 && d2<n )
        escape(d,d2,e,n,arr);
    
}