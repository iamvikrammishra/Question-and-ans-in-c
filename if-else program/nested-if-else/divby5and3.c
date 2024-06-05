//take a no. from user and tell it is divisible by 5 or 3

/* #include<stdio.h>
int main(){
    int n;
    printf("enter a positive number ");
    scanf("%d",&n);
    if(n%5==0)
    {
        if(n%3==0)
        {
           printf("it is diviible by 5 or 3\n ");
        }
        else
        {
            printf("it is not divisible by 5 or 3");
        }
    }
    
else{
    printf("it is not divisible by 5 or 3");
}
    return 0;
}*/
//take a no. from user and tell it is divisible by 5 or 3 but not 15
 
 
 #include<stdio.h>
int main(){
    int n;
    printf("enter a positive number ");
    scanf("%d",&n);
    // if(n%5==0 || n%3==0)
    // {
    //     if(n%15!=0)
            if((n%5==0 || n%3==0) && n%15!=0) 
            /*here we use two times parenthesis
            because of in these two oerator || and && operator 
             prefrence of && is more according to bodmas*/
            {
           printf("it is diviible by 5 or 3 but not divisible by 15\n ");
        }
        else
        {
            printf("the number is not matching the required condition");
        }
    
        
                return 0;

        }
