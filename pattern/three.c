/*#include<stdio.h>
int main(){
    int numoflines = 5;
    for(int i=1;i<=numoflines;i++){
        for(int j=5;j>=i;j--){
            printf("%c ", '*');
        }
        printf("\n");
    }

}*/
/*#include<stdio.h>
int main(){
    int numoflines = 5;
    for(int i=1;i<=numoflines;i++){
        for(int j=1;j<=numoflines-i+1;j++){
            printf("%d ",j);
        }
        printf("\n");
    }

}*/
#include<stdio.h>
int main(){
    int numoflines = 5;
    for(int i=1;i<=numoflines;i++){
        for(int j=numoflines-i+1;j>=1;j--){
            printf("%d ",j);
        }
        printf("\n");
    }

}