//multiple condition using &&(and) and ||(or)
// cheak a no. is three digit or not
#include<stdio.h>
int main(){
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    if(n>99 && n<1000){
        printf("it is three digit number");

    }
    else{
        printf("it is not a three digit number");
    }
    return 0;
}