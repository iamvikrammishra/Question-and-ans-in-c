// gretest b/w three numbers

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter three numbers ");
    scanf("%d%d%d", &a, &b, &c);
    if (a>=b && a>=c)
    {
        printf("the larger no. is in b/w these three %d", a);
    }
    if (b>=a && b>=c)
    {
        printf("the larger no. is in b/w these three %d ", b);
    }
    if (c>=a && c>=b)
    {
        printf("the larger no. is in b/w these three %d ", c);
    }
    return 0;
}
