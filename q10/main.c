#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hour, minute;
    scanf("%d:%d", &hour, &minute);

    if (hour == 0)
       printf("12:%.2dAM", minute);
    else if (hour < 12)
       printf("%d:%.2dAM", hour, minute);
    else if (hour == 12)
        printf("%d:%.2dPM", hour, minute);
    else
        printf("0%d:%.2dPM", hour - 12, minute);

    return 0;
}
