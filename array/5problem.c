//*Ques: Find the minimum value out of all the elements
// in the array.
// searching the min element
// {23,20,12,45,76,89}
#include<stdio.h>
int main(){
    int arr[6]={23,32,45,65,43,12}, min;
    min=arr[0];
    for(int i=0;i<6;i++){
        if(min> arr[i]){
            min= arr[i];
        }
    }
    printf("%d ", min);


return 0;
}