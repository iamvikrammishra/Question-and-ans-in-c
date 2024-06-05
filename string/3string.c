#include<stdio.h>
#include<string.h>
int main(){
char str[40];
// scanf ("%s", str); // only the first word will be considered
gets (str); // entire sentence can be tak printf ("your input was : %s", str);
printf("your input was %s", str);
return 0;
}