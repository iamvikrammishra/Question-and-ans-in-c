#include<stdio.h>
int main(){
    int l =10,b=20,a,p;

    a= l*b;
    printf("area of the rectangle is %d\n",a);
    p= 2*(l+b);
    printf("perimeter of the reactangle is %d\n",p);
    if(a<p){
        printf("area of the reacangle is greter than the perimeter");
    }
    else{
        printf("area of the reacangle is not greter than the perimete");
    }
    return 0;
}