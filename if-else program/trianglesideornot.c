// take three no. from the user and tell if they can be the sides of a triangle

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter three numbers ");
    scanf("%d%d%d",&a, &b, &c);
    if(a+b>c && a+c>b && b+c>a)
    {
        printf("they can be the sides of triangle");
    }
    else {
        printf("they can't be the side of triangle");
    }
     return 0;
}
