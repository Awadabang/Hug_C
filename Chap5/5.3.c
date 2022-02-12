#include <stdio.h>

int main() {
    int m, n;
    printf("Please input m:");
    scanf("%d", &m);
    printf("Please input n:");
    scanf("%d", &n);
    for (int i = (m>n?n:m); i >0 ; --i) {
        if (m%i == 0 && n%i == 0) {
            printf("最大公约数为：%d\n", i);
            break;
        }
    }
    for (int i = 1; ; ++i) {
        if((i*m)%n == 0){
            printf("最小公倍数为：%d", i*m);
            break;
        }
    }
    return 0;
}