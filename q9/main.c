#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    scanf("%d",&grade);
    switch(grade/10){
        case 10:
        case 9:
            printf("A");
            break;

        case 8:
            printf("B");
            break;

        case 7:
            printf("C");
            break;

        case 6:
            printf("D");
            break;

        case 5:
            printf("A");
            break;
    }

    return 0;

}
