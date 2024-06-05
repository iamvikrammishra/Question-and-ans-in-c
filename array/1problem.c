
// Ques: Given an array of marks of 10 students, 
// if the mark of any student is less than 35 print its roll number. 
// [roll number here refers to the index of the array.]

// int marks [10] = {95, 90,31, 25,100,50,65,89,97,30}；
#include<stdio.h>
int main(){
    int i;
    int marks[10]= {95, 90,31, 25,100,50,65,89,97,30};
    
    for(int i=0;i<10;i++){
         if(marks[i]<=35)
        printf("%d ",i);// because hme index print karwana isliye i likha agr marks 
        //print karwan hota to to marks[i] likhte
    }
   
    return 0;
}