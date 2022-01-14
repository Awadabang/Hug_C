#include <stdio.h>

int main(){
    int year;
    printf("Please input a year:");
    scanf("%d",&year);
    if (year < 1900 || year > 2000) {
        return 0;
    } else {
        if (year % 4 == 0 && year % 100 != 0) {
            printf("Year:%d is lunar", year);
            return 0;
        }
        if (year % 100 == 0 && year % 400 ==0){
            printf("Year:%d is lunar", year);
            return 0;
        }
        printf("Year:%d is not lunar", year);
        return 0;
    }
}