#include <stdio.h>

int main()
{
    int t, a1, a2, b1, b2, c1, c2, d1, d2, area, j = 1;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d %d %d %d", &a1, &a2, &b1, &b2, &c1, &c2);
        d1 = a1 + c1 - b1;
        d2 = a2 + c2 - b2;
        area = 0.5 * (((a1 * b2) + (b1 * c2) + (c1 * d2) + (d1 * a2)) - ((a2 * b1) + (b2 * c1) + (c2 * d1) + (d2 * a1)));
        if (area < 0)
            area *= -1;
        printf("Case %d: %d %d %d\n", j, d1, d2, area);
        j++;
    }
    return 0;
}