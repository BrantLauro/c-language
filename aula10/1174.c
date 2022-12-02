#include <stdio.h>

int main() {
    int i; double num, A[100];
    for (i = 0; i < 100; i++) {
        scanf("%lf", &num);
        A[i] = num;
        if(num <= 10) printf("A[%d] = %.1lf\n", i, num);
    }
    return 0;
}