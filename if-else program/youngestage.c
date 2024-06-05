// if the ages of ram shyam vikram are input via keyboard
// write a program to determine the youngest of the three

#include <stdio.h>
int main()
{
    char ram,shyam,vikram;
    printf("enter the ages of ram shyam and vikram : ");
    scanf("%c%c%c",&ram,&shyam,&vikram);
    if (ram<shyam && ram<vikram)
    {
        printf("youngest b/w these %c", ram);
    }
    if (shyam<ram && shyam<vikram)
    {
        printf("youngest b/w these %c", shyam);
    }
    if (vikram<ram && vikram<shyam)
    {
        printf("youngest b/w these %c", vikram);
    }
    return 0;
}
