#include<bits/stdc++.h>
using namespace std;

struct tringle
{
    int a;
    int b;
    int c;
    double area;
};

void bubbleSort(struct tringle tri[], int n)
{
    int i, j;
    struct tringle temp;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
        {
            if(tri[j].area>tri[j+1].area){
                temp=tri[j];
                tri[j]=tri[j+1];
                tri[j+1]=temp;
            }
        }
}

int main(){
    int t;
    
    scanf("%d",&t);
    struct tringle tri[t];
    double a,b,c,s;
    for (int i=0;i<t;i++)
    {
        scanf("%d%d%d",&tri[i].a,&tri[i].b,&tri[i].c);
        a=tri[i].a;
        b=tri[i].b;
        c=tri[i].c;
        s=(a+b+c)/2;
        tri[i].area=s*(s-a)*(s-b)*(s-c);
    }
    bubbleSort(tri,t);
    for(int i=0;i<t;i++){
        printf("%d %d %d %lf\n",tri[i].a,tri[i].b,tri[i].c,tri[i].area);
    }
    
    
    return 0;
}