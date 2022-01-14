#include <stdio.h>

int main(){
    double r = 0.09;
    int n = 10;
    double p = 1;
    while ((n--)>0) {
        p *= (1+r);
    }
    printf("p=%lf",p);
    return 0;
}