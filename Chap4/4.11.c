#include <stdio.h>

int main() {
    int a, b, c, d, min, max;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    min = a;
    max = a;
    if(b>max)
        max = b;
    if(b<min)
        min = b;
    if(c>max)
        max = c;
    if(c<min)
        min = c;
    if(d>max)
        max = d;
    if(d<min)
        min = d;
    printf("Max:%d\n",max);
    printf("Min:%d\n",min);

    return 0;
}