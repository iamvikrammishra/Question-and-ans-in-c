#include<stdio.h>
int main (){
float age = 22.00; 
float *ptr = &age;
printf("ptr = %u\n", ptr);
ptr++;
printf("ptr = %u\n", ptr);
// ptr--;
ptr++;
printf("ptr = %u\n", ptr);
return 0;
}