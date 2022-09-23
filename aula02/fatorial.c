/*
    Faça um programa que Calcule o fatorial de um número digitado pelo usuário.

#include <stdio.h>

int main() {
    int num, contNum, fatorial;
    printf("\n Digite um numero para saber seu fatorial: ");
    scanf("%d", &num);
    contNum = num;
    fatorial = num;
    while (contNum > 1) {
        contNum--;
        fatorial *= contNum;
    }
    printf("\n %d! = %d", num, fatorial);
}
*/

#include <stdio.h>

int main() {
    int num, numf, fat;
    printf("\n Digite um numero para saber seu fatorial: ");
    scanf("%d", &num);
    numf = num;
    for (fat = 1; num > 1; num--) fat *= num;
    printf("\n !%d = %d", numf, fat);
}
