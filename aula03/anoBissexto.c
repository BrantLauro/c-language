/*
    Desenvolva um programa que solicite ao usuário o ano e imprima "Ano Bissexto" ou "Ano Não Bissexto", 
    conforme o caso. Utilize o operador condicional
*/

#include <stdio.h>

int main() {
    int ano;
    scanf("%d", &ano);
    printf("%s", ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) ? "Ano Bissexto" : "Ano Nao Bissexto");
    return 0;
}
