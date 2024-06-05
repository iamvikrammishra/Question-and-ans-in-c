
// Write a program to enter price of 3 items & print their
// final cost with gst.
#include <stdio.h>
int main()
{
    float price[] = {100.0,200.0,300.0};
    printf("enter three prices :");
    // scanf("%f", &price[0]);
    // scanf("%f", &price[1]);
    // scanf("%f", &price[2]);
    price[0] = price[0] + (0.18 * price[0]);
    price[1] = price[1] + (0.18 * price[1]);
    price[2] = price[2] + (0.18 * price[2]);
    printf("total price of 1 is %f\n: ", price[0]);
    printf("total price of 2 is %f\n: ", price[1]);

    printf("total price of 3 is %f\n: ", price[2]);
    return 0;
}