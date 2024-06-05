#include<stdio.h>
int main(){
    //part 1
    int numoflinespart1=8; //n
    for(int i=1;i<=numoflinespart1;i++){
        //n-1 spaces, 2*i-1 num of stars
        for(int j=1;j<=numoflinespart1-i;j++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    //part 2
    
}