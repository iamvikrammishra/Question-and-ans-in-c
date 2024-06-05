#include<stdio.h>
int main(){
char str[20] = "CollegeWallah";
str [1] = 98; // 'b' botha work same  because of b ki ascii value 98 hai
int i = 0;
while(str[i]!='\0'){
printf ("%c", str[i]);
i++;
}
return 0;
}