/*
    Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. 
    Utilize a fórmula apresentada.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, maior;
    scanf("%d %d %d", &a, &b, &c);
    maior = (a + b + abs(a - b)) / 2;
    if (c > maior) maior = c;
    printf("%d eh o maior\n", maior);
    return 0;
}
