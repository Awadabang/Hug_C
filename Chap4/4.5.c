#include <stdio.h>
#include "math.h"

int main() {
    int a;
    scanf("%d", &a);
    while(a>=1000 || a<=0){
        printf("Please input again:");
        scanf("%d", &a);
    }
    printf("%1.f",sqrt(a));
    return 0;
}