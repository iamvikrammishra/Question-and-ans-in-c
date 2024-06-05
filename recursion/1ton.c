// this is first method to solving this type of question
//using extra variable

#include<stdio.h>
void increasing(int x,int n){
    if(x>n) return;
     printf("%d\n",x);
    increasing(x+1,n);
   
    return;
}
// x ki jagah 1 ko pass kr raha hu and 
//n ki jagah jaha tk print krwana wo paas kr rha hu
int main(){
    int n;
    printf("enter a no : ");
    scanf("%d",&n);
    increasing(1,n);
    return 0;
}