#include <stdio.h>
int factorial(int x){
int fact = 1;
for(int i=2;i<=x;i++){
fact = fact*i;
}
return fact; 
}
int combination(int n, int r){
    int ncr= factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    for(int i=0;i<=n;i++){
        int first= 1;
        printf("%d ",first);
        for(int j=0;j<=i;j++){
            //icj means ncr
            int icj = combination(i,j);
            printf("%d ",icj);
        }
        printf("\n");
    }
    return 0;
}
