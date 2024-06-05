#include<stdio.h>
int main(){
    int c,s,n;
    printf("enter the cost price of the item ");
    scanf("%d",&c);
    printf("enter the selling price of the item ");
    scanf("%d",&s);
    if(c<s){
        printf("seller make the profit");
    }
    if(c>s){
        printf("seller have a loss");
    }
    if(c==s){
        printf("no profit no loss");
    }
    return 0;
}