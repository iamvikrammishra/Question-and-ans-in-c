#include<stdio.h>
void swap(int* x, int* y)//int* x, address hold kr raha hai a ka
{
int temp;
temp = *x; //* x = a ki value that is 2 that means in temp value is 2
*x = *y;//* y = b ki value 9 and now * x jo ki a hai usme 9
*y = temp;//* y =b and temp ki value gyi ab b mai
return;
}
int main(){
int a = 2;
int b = 9;
swap(&a, &b);
printf("The value of a is %d\n",a);
printf("The value of b is %d",b);
return 0;
}