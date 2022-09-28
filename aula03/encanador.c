/*
    Uma empresa contrata um encanador a RS 20,00 por dia. Crie um programa que solicite
    o número de dias trabalhados pelo encanador e imprima o valor líquido a ser pago, 
    sabendo que são descontados 8% de imposto de renda.
*/

#include <stdio.h>

int main() {
    int dias, total;
    scanf("%d", &dias);
    total = (dias * 20) * 0.92;
    printf("O total eh: %d", total);
    return 0;
}
