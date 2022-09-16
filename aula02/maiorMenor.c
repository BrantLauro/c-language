/*
    Faça um programa que receba três números e escreva:
    a) Qual o maior dos três.
    b) Qual o menor dos três.
    c) A Média dos três números.
*/

#include <stdio.h>

int main() {
    int num1, num2, num3, maior, menor, media;
    printf("\n Digite 3 numeros: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    // maior
    maior = num1;
    if (num2 > maior) {
        maior = num2;
    }
    if (num3 > maior) {
        maior = num3;
    }
    // menor
    menor = num1;
    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }
    media = (num1 + num2 + num3) / 3;
    printf("O maior e: %d e o menor e: %d. A media e: %d", maior, menor, media);
    return 0;
}
