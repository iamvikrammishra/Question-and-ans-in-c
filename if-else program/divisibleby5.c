#include<stdio.h>
int main(){
    int n;
    printf("enter a positive enteger no.");
    scanf("%d",&n);
    if(n%5==0){
        printf("it is divisible by 5");
    }
    else{
        printf("it's not divisible by 5");
    }
    return 0;
}