#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hour, minute;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    if (hour == 0)
       printf("It's: 12:%.2d AM\n\n", minute);
    else if (hour < 12)
       printf("It's: %d:%.2d AM\n\n", hour, minute);
    else if (hour == 12)
        printf("It's: %d:%.2d PM\n\n", hour, minute);
    else
        printf("It's: %d:%.2d PM\n\n", hour - 12, minute);

    return 0;
}
