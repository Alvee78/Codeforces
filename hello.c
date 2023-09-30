#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    double OA,OB,AB,angle,ox,oy,ax,ay,bx,by,j=1;
    while(t--)
    {
        scanf("%d%d%d%d%d%d",&ox,&oy,&ax,&ay,&bx,&by);
        OA=sqrt(pow(ax-ox,2)+pow(ay-oy,2));
        OB=sqrt(pow(bx-ox,2)+pow(by-oy,2));
        AB=sqrt(pow(ax-bx,2)+pow(ay-by,2));
        ang=acos((pow(OA,2)+pow(OB,2)-pow(AB,2))/(2*OA*OB));
        printf("Case %d: %.3lf\n",j, OA*angle);j++;
    }
    return 0;
}