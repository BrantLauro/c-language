#include <stdio.h>

int main() {
    int num, i, j, par[5], impar[5], pares = 0, impares = 0;
    for(i = 0; i < 15; i++) {
        scanf("%d", &num);
        if(num % 2 == 0) {
            par[pares] = num;
            pares ++;
        } else {
            impar[impares] = num;
            impares ++;
        }
        if (pares >= 5) {
            pares = 0;
            for(j = 0; j < 5; j++) {
                printf("par[%d] = %d\n", j, par[j]);
            }
        }
        if (impares >= 5) {
            impares = 0;
            for(j = 0; j < 5; j++) {
                printf("impar[%d] = %d\n", j, impar[j]);
            }
        }
    }
    for(i = 0; i < impares; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    for(i = 0; i < pares; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}