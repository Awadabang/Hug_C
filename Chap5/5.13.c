#include <stdio.h>
#include "math.h"

int main() {
    int a;
    double x1 = 0, x2 = 0;
    int flag = 0;
    printf("Please input a number:");
    scanf("%d", &a);
    x1 = a;
    while (fabs(x1 - x2) >= 0.00001) {
        if(flag ==1 )
            x1 = x2;
        x2 = 1.0/2.0 * (x1 + a / x1);
        flag = 1;
    }
    printf("%f",x1);
    return 0;
}