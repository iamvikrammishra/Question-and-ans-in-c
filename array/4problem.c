
// *Ques: Find the maximum value out of all the elements
// in the array.
// searching the max" element
// {23,20,12,45,76,89}
#include<stdio.h>
int main(){
    int arr[6]={23,32,45,65,43,12}, max;
    max=arr[0];
    for(int i=0;i<6;i++){
        if(max< arr[i]){
            max= arr[i];
        }
    }
    printf("%d ", max);


return 0;
}