#include <stdio.h>
int main()
{
    int a;
    printf("Enter a : ");
    scanf("%d",&a);
    int b;
    printf("Enter b : ");
    scanf("%d",&b);
    //with using third variable temp
    // int temp;
    // temp = a;
    // a = b;
    // b = temp;
    //without using third variable
    a = a+b;
    b = a-b;
    a = a-b;
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    return 0;
}