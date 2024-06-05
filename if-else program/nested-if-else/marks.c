/*Ques : Take input percentage of a student and print the Grade according to marks:
1) 90-100 Excellent
2) 80-90 Very Good
3) 70-80 Good 
4) 60-70 can do better
5) 50-60 Average
6) 40-50 Below Average
7) <40 Fail */
#include<stdio.h>
int main(){
    int n;
    printf("enter percentage ");
    scanf("%d",&n);
    if(n>90){
        printf("Excellent\n");
    }
    else if(n>80){
            printf("very good");
        }
        else if(n>70){
            printf("good");
        }

    else if(n>60){
            printf("can do better");
}
else if(n>50){
            printf("average");
}
else if(n>40){
            printf("below average");
}
else{
    printf("fail");
}
}