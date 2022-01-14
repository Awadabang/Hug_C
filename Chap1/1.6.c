#include <stdio.h>

int main(){
    int a,b,c,max;
    printf("Please input A:");
    scanf("%d",&a);
    max = a;
    printf("Please input B:");
    scanf("%d",&b);
    if (b>max) max=b;
    printf("Please input C:");
    scanf("%d",&c);
    if (c>max) max=c;
    printf("MAX=%d",max);
    return 0;
}