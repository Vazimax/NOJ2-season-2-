#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    double i, m;
    
    scanf("%lf", &i);
    
    if (i <= 100000)
        m = i * 0.1;
    else if (i < 200000)
        m = 100000 * 0.1 + (i - 100000) * 0.075;
    else if (i < 400000)
        m = 100000 * 0.1 + 100000 * 0.075 + (i - 200000) * 0.05;
    else if (i < 600000)
        m = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (i - 400000) * 0.03;
    else if (i < 1000000)
        m = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (i - 600000) * 0.015;
    else
        m = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (i - 100000) * 0.01;
    
    printf("%f\n", m / 10000);
    
    return 0;
    
}