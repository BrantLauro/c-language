/*
    Ler um valor N. Calcular e escrever seu respectivo fatorial. Fatorial de N = N * (N-1) * (N-2) * (N-3) * ... * 1.
*/

#include <stdio.h>

int main() {
    int n, fac;
    scanf("%d", &n);
    fac = n;
    for (int quant = 1; quant < n; quant ++){
        fac *= (n - quant);
    }
    printf("%d", fac);
    return 0;
}
