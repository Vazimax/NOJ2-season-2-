#include <stdio.h>
#include <stdlib.h>

int main()
{

    double profit, commission;
    scanf("%lf",&profit);

    if (profit <= 100000){
        commission = profit*0.1;
    }
    else if(profit > 100000 && profit <= 200000){
        int profit1 = profit;
        while (profit1 >= 10){
            profit1 /= 10;
        }
        printf("%d",profit1);
        int profit2 = profit - (profit1*100000);
        commission = profit1*0.075*100000 + profit2;
    }
    else if(profit > 200000 && profit <= 400000){
        int profit1 = profit;
        while (profit1 >= 10){
            profit1 /= 10;
        }
        printf("%d",profit1);
        int profit2 = profit - (profit1*100000);
        commission = profit1*0.05*100000 + profit2;
    }
    else if(profit > 400000 && profit <= 600000){
        profit -= 100000;
        commission = profit*0.03 + 10000;
    }
    else if(profit > 600000 && profit <= 1000000){
        profit -= 100000;
        commission = profit*0.015 + 10000;
    }
    else {
       profit -= 100000;
        commission = profit*0.01 + 10000;
    }

    double output = commission / 10000;
    printf("%.6f",output);
    return 0;
}
