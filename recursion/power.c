// #include<stdio.h>
// int power (int a, int b){
// int x = 1;
// for(int i=1; i<=b; i++){
// x = x*a;
// }
// return x;
// }
// int main(){
// int a;
// printf("Enter base : ");
// scanf ("%d", &a) ;
// int b;
// printf("Enter power: ");
// scanf ("%d", &b);
// int p= power(a,b);
// printf("%d raised to the power %d is %d", a,b,p);
// return 0;
// }
#include<stdio.h>
int power (int a, int b){
if(b==0) return 1;
//power(a,b)=a*power(a,b-1)
return a*power(a,b-1);
}
int main(){
int a;
printf("Enter base : ");
scanf ("%d", &a) ;
int b;
printf("Enter power: ");
scanf ("%d", &b);
int p= power(a,b);
printf("%d raised to the power %d is %d", a,b,p);
return 0;
}