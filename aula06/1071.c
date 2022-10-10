/*
    Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.
*/

#include <stdio.h>

int main() {
    int x, y, soma = 0;
    scanf("%d %d", &x, &y);
    for (int quant = y; quant < x; quant++) {
        if (quant % 2 != 0 && quant != y) {
            soma += quant;
        }
    }
    printf("%d\n", soma);
    return 0;
}
