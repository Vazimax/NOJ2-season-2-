#include <stdio.h>
#include <stdlib.h>

int main()
{
    double mileage, price;

    scanf("%lf",&mileage);
    if ( mileage>= 2 && mileage<=15){
        mileage -= 2;
        price = ceil(mileage)*1.5 + 7;
    }
    else{
        mileage -= 2;
        price = ceil(mileage)*2.1 + 7;
    }
    printf("%.6f", price);

    return 0;
}
