/*
    Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, 
    o valor que recebe por hora e calcula o salário desse funcionário. 
    A seguir, mostre o número e o salário do funcionário, com duas casas decimais.
*/

#include <stdio.h>

int main() {
    int numero, horas; double salario, valorHora;
    scanf("%d %d %lf", &numero, &horas, &valorHora);
    salario = horas * valorHora;
    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2lf\n", salario);
    return 0;
}
