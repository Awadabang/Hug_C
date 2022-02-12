#include <stdio.h>
#include "math.h"

int main() {
    int a = 2,n,ans=0,extra=0;
    printf("Please input a number:");
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        extra = 0;
        for (int j = 0; j <= i-1; ++j) {
            extra += a * pow(10,j);
        }
        ans += extra;
    }
    printf("%d", ans);
    return 0;
}