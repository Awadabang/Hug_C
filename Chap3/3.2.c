#include <stdio.h>
#include <math.h>

#define MONEY 1000
#define PROFIT_1 0.0414
#define PROFIT_2 0.0468
#define PROFIT_3 0.0540
#define PROFIT_5 0.0585
#define PROFIT_0 0.0072

double plan_1(){
    return MONEY * (1 + 5 * PROFIT_5);
}

double plan_2(){
    double p = MONEY * (1 + 2 * PROFIT_2);
    return p * (1 + 3 * PROFIT_3);
}

double plan_3(){
    double p = MONEY * (1 + 3 * PROFIT_3);
    return MONEY * (1 + 2 * PROFIT_2);
}

double plan_4(){
    return MONEY * pow(1 + PROFIT_1,5);
}

double plan_5(){
    return MONEY * pow(1 + PROFIT_0/4,20);
}

int main(){
    printf("plan_1 make : %lf\n",plan_1());
    printf("plan_2 make : %lf\n",plan_2());
    printf("plan_3 make : %lf\n",plan_3());
    printf("plan_4 make : %lf\n",plan_4());
    printf("plan_5 make : %lf\n",plan_5());
    return 0;
}




