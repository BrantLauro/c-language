/*
    Dois amigos jogam na loteria toda semana. Escreva um programa que solicite a quantia
    com que cada um participou e o valor do prêmio a ser rateado em partes diretamente
    proporcionais às quantias de cada um deles. 0 programa deve imprimir quanto cada um
    dos amigos receberá caso sejam ganhadores.
*/

#include <stdio.h>

int main() {
    double amg1, amg2, total, premio;
    scanf("%lf %lf %lf", &amg1, &amg2, &premio);
    total = amg1 + amg2;
    printf("Amigo 1: %.2lf \nAmigo 2: %.2lf", (amg1/total) * premio, (amg2/total) * premio);
    return 0;
}
