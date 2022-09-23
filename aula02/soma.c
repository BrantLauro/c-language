/*
    Faça um programa que calcule:
    s = (10/2² + 100/2^4 + 1000/2^6) com 10 elementos
*/

#include <stdio.h>
#include <math.h>

int main() {
    double termo1 = 10, termo2 = 2, expoente = 2, soma = 0, i = 0;
    termo1 = 10;
    termo2 = 2;
    expoente = 2;
    for (int cont = 0; cont <= 10; cont++) {
        soma += termo1 / (pow(termo2, expoente));
        termo1 *= 10;
        expoente += 2;
        i++;
    }
    printf("\n A soma eh igual a %.2lf %d\n\n", soma, i++);
}
