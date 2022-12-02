#include <stdio.h>

int main() {
    int num, i, N[10];
    scanf("%d", &num);
    N[0] = num;
    printf("N[0] = %d\n", num);
    for(i = 1; i < 10; i++) {
        N[i] = N[i - 1] * 2;
        printf("N[%d] = %d\n", i, N[i]);
    }
    return 0;
}