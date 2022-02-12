#include <stdio.h>

int main() {
    int a[3][3];
    printf("Please input data:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("对角线元素之和为:%d", a[0][0] + a[0][2] + a[1][1] + a[2][0] + a[2][2]);
    return 0;
}