#include <stdio.h>
#include <stdlib.h>

int main()
{

    int y,m,d;
    printf("Enter the date: ");
    scanf("%d%d%d",&y,&m,&d);
    printf("%d \n",d);

    printf("%d \n",m);
    int day ;
    day = m*30 + d;
    printf("The day of the year is: %d", day);
    return 0;
}
