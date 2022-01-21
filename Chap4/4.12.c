#include <stdio.h>
#include "math.h"

int main() {
    float x, y;
    scanf("%f", &x);
    scanf("%f", &y);
    if(x==0 || y==0)
        printf("H=0");
    else if (x > 0 && y > 0){
        if(sqrt(pow(x-1,2)+ pow(y-1,2)) <= 1)
            printf("H=10");
        else
            printf("H=0");
    }
    else if (x > 0 && y < 0){
        if(sqrt(pow(x-1,2) + pow(y+1,2)) <= 1)
            printf("H=10");
        else
            printf("H=0");
    }
    else if (x < 0 && y > 0){
        if(sqrt(pow(x+1,2)+ pow(y-1,2)) <= 1)
            printf("H=10");
        else
            printf("H=0");
    }
    else if (x < 0 && y < 0){
        if(sqrt(pow(x+1,2)+ pow(y+1,2)) <= 1)
            printf("H=10");
        else
            printf("H=0");
    }


    return 0;
}