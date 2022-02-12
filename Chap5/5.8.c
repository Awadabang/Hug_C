#include <stdio.h>
#include "math.h"

int main() {
    for (int i = 100; i < 1000; ++i) {
        int num1 = i/100;
        int num2 = (i - num1*100)/10;
        int num3 = i - num1*100 - num2*10;
        if(i == pow(num1,3) + pow(num2,3) + pow(num3,3))
            printf("%d\n", i);
    }
    return 0;
}