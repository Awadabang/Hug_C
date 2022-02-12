#include <stdio.h>

int main() {
    int ans = 0;
    for (int i = 1; i <= 1000; ++i) {
        ans = 0;
        for (int j = 1; j < i; ++j) {
            if(i%j == 0)
                ans += j;
        }
        if(ans == i){
            printf("%d its factors are ",i);
            for (int j = 1; j < i; ++j) {
                if(i%j == 0)
                    printf("%d,", j);
            }
            printf("\n");
        }

    }
    return 0;
}