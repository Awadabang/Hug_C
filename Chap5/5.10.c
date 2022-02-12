#include <stdio.h>

int main() {
    double top = 2, bottom = 1, temp, ans = 2;
    for (int i = 0; i < 19; ++i) {
        temp = bottom;
        bottom = top;
        top = temp + bottom;
        ans += top/bottom;
    }
    printf("%f", ans);
    return 0;
}