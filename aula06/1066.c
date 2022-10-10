/*
    Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares, quantos valores digitados foram ímpares,
    quantos valores digitados foram positivos e quantos valores digitados foram negativos.
*/

#include <stdio.h>

int main() {
    int num, pares = 0, impares = 0, positivos = 0, negativos = 0;
    for (int quant = 0; quant < 5; quant++) {
        scanf("%d", &num);
        if (num > 0) {
            positivos ++;
        } else if (num < 0) {
            negativos ++;
        }
        if (num % 2 == 0) {
            pares ++;
        } else {
            impares ++;
        }
    }
    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);
    return 0;
}
