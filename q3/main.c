#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    scanf("%d",&number);

    for (int i= 2; i*i<=number; i+=2){

        printf("%d\n",i*i);
    }

    
    return 0;
}
