#include<stdio.h>
int main(){
    int numoflines = 5;
    for(int i=1;i<=numoflines;i++){
        for(int j=1;j<=i;j++){
            printf("%c ", '*');
        }
        printf("\n");
    }

}