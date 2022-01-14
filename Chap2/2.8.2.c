#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c,d;
    printf("Please input a:");
    scanf("%d", &a);
    printf("Please input b:");
    scanf("%d", &b);
    printf("Please input c:");
    scanf("%d", &c);
    d = b*b - 4*a*c;
    if (d > 0) {
        printf("X_1=%f\n", (b + sqrt(d))/(2*a));
        printf("X_2=%f", (b - sqrt(d))/(2*a));
        return 0;
    }
    if (d == 0) {
        printf("X_1=X_2=%f\n", (b + sqrt(d))/(2*a));
        return 0;
    }
    if (d < 0) {
        printf("No solution");
        return 0;
    }
}