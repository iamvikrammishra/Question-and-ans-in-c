// gretest b/w four number

#include <stdio.h>
int main()
{
    int a, b, c,d;
    printf("enter four numbers ");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a>b && a>c && a>d)
    {
        printf("the larger no. is in b/w these four are %d", a);
    }
    if (b>a && b>c && b>d)
    {
        printf("the larger no. is in b/w these four are %d ", b);
    }
    if (c>a && c>b && c>d)
    {
        printf("the larger no. is in b/w these four are %d ", c);
    }
    if (d>a && d>b && d>c)
    {
        printf("the larger no. is in b/w these four are %d ", d);
    }
    return 0;
}
