 /*#include<stdio.h>
int main(){
    int numoflines = 10;
    for(int i=1;i<=numoflines;i++){
        //have to print some spaces: numoflines-i(no. of space)
        for(int j=1;j<=numoflines-i;j++){
            printf(" ");
        }
        //have to print numbers from 1 to i
        for(int j=1;j<=i;j++){
            printf("%d", j);
        }
        printf("\n");
    }

} */

 #include<stdio.h>
int main(){
    int numoflines = 10;
    for(int i=1;i<=numoflines;i++){
        //have to print some spaces: numoflines-i(no. of space)
        for(int j=1;j<=numoflines-i;j++){
            printf("*");
        }
        //have to print numbers from 1 to i
        for(int j=1;j<=i;j++){
            printf("%d", j);
        }
        printf("\n");
    }

} 