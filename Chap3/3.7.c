#include <stdio.h>
#include <math.h>

int main() {
    float r, h;
    printf("r=");
    scanf("%f",&r);
    printf("h=");
    scanf("%f",&h);
    printf("C=%.2f", 2*M_PI*r);
    printf("\nS1=%.2f", M_PI* pow(r,2));
    printf("\nS2=%.2f", 4*M_PI* pow(r,2));
    printf("\nV1=%.2f", (3.0/4.0)*M_PI* pow(r,3));
    printf("\nV2=%.2f", h*M_PI* pow(r,2));

    return 0;
}