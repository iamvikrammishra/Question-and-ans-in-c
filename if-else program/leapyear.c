#include<stdio.h>
int main(){
    int n;
    printf("enter any year");
    scanf("%d",&n);
    if(n%4==0){
        printf("this is the leap year");
    }
    else{
        printf("this is not the leap year");
        }
        return 0;
}