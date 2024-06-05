// Ques: Calculate the sum of all the elements in the
// given array.
// arr[5]={51,3,5,9,10}
#include<stdio.h>
int main(){
    int arr[5]={2,3,4,5,6};
    int sum =0;
    for(int i=0;i<5;i++){
        sum = sum+arr[i];
    }
    printf("%d ",sum);
    return 0;
}