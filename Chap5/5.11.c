#include <stdio.h>

int main() {
    double a = 100;
    for (int i = 1; i <= 10; ++i) {
        a = a / 2.0;
    }
    printf("%lf", a);
    return 0;
}