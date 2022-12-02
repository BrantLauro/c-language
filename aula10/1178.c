#include <stdio.h>

int main() {
    int i; double num, A[100];
    scanf("%lf", &num);
    A[0] = num;
    printf("N[0] = %.4lf\n", num);
    for (i = 1; i < 100; i++) {
        A[i] = A[i - 1] / 2;
        printf("N[%d] = %.4lf\n", i, A[i]);
    }
    return 0;
}