#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    int divisor = 1;
    scanf("%d %d",&num1, &num2);

    for (int i=1; i<=num1; i++){
        if (num1%i==0 && num2%i==0){
            if (i>=divisor){
                divisor = i;
            }
        }
    }
    printf("%d/%d",num1/divisor, num2/divisor);
    return 0;
}
