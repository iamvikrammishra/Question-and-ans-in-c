// #include<stdio.h>
// void sum(int n,int s){
//     if(n==0){
//         printf("%d",s);
//         return;
//     }
//     sum(n-1,s+n);
//     return;
// }

// int main(){
//     int n;
//     printf("enter a no.:");
//     scanf("%d",&n);
//     sum(n,0);
//     return 0;

// }

//second method
#include<stdio.h>
int sum(int n){
if(n==1 || n==0) return 1;
int recAns = n+sum(n-1);
return recAns;
}
int main (){
int n;
printf("Enter a number : ");
scanf ("%d", &n) ;
int fact = sum(n);
printf("%d", fact);
return 0;
}