/*
    A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como série de Fibonacci. Nessa sequência, cada número, 
    depois dos 2 primeiros, é igual à soma dos 2 anteriores. Escreva um algoritmo que leia um inteiro N (N < 46) e mostre os N 
    primeiros números dessa série.
*/

#include <stdio.h>

int main() {
    int n, termo, num1 = 1, num2 = 0;
    scanf("%d", &n);
    printf("0 1 ");
    for (int quant = 0; quant < (n - 2); quant++) {
        termo = num1 + num2;
        num2 = num1;
        num1 = termo;
        if (quant == (n - 3)) {
            printf("%d\n", termo);
        } else {
            printf("%d ", termo);
        }
    }
    return 0;
}
