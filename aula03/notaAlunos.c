/*
    Faça um programa que leia notas até que uma nota negativa seja digitada, depois mostre na tela:
    a) quantidade de alunos.
    b) maior nota.
    c) menor nota.
    d) media das notas.
*/

#include <stdio.h>

int main() {
    double maior, menor, media, nota, soma = 0; int quant;
    scanf("%lf", &nota);
    maior = nota;
    menor = nota;
    for (quant = 0; nota >= 0; quant ++) {
        if (nota > maior) maior = nota;
        if (nota < menor) menor = nota;
        soma += nota;
        scanf("%lf", &nota);
    }
    media = soma / quant;
    printf("Quantidade = %d \nMaior = %.1lf \nMenor = %.1lf \nMedia = %.1lf \n", quant, maior, menor, media);
    return 0;
}
