// Homework: Calculate the product of all the elements in the given array.
// arr {2,3,4,5,6,2}
#include<stdio.h>
int main(){
    int arr[6]={2,3,4,5,6,2};
    int multiply =1;
    for(int i=0;i<6;i++){
        multiply= multiply*arr[i];
    }
    printf("%d ",multiply);
    return 0;
}