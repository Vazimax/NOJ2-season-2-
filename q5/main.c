#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, rev=0, rem;
    printf("Enter any number: ");
    scanf("%d", &n);
    int n1 = n;
    while(n!=0){
     rem = n%10;
     rev = rev * 10 + rem;
     n /= 10;
    }
    if (n1 == rev){
        printf("Yes it's a lucky number ;/ ");
    }
    else{
        printf("No it's not the lucky number");
    }
    return 0;
    return 0;
}
