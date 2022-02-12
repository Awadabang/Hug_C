#include <stdio.h>

int main() {
    int a[10] = {1,4,6,9,13,16,19,28,40,100};
    int temp;
    printf("Before:\n");
    for (int i = 0; i < 10; ++i) {
        printf("%d\t",a[i]);
    }
    for (int i = 0; i < 5; ++i) {
        temp = a[9-i];
        a[9-i] = a[i];
        a[i] = temp;
    }
    printf("\nAfter:\n");
    for (int i = 0; i < 10; ++i) {
        printf("%d\t",a[i]);
    }
    return 0;
}