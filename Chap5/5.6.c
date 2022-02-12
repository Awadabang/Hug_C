#include <stdio.h>

int main() {
    int extra = 1, ans = 0;
    for (int i = 1; i <= 20; ++i) {
        extra = 1;
        for (int j = 1; j <= i; ++j) {
            extra *= j;
        }
        ans += extra;
    }
    printf("%d", ans);
    return 0;
}