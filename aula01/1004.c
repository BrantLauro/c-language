/*
    Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta operação à variável PROD. A seguir mostre a variável prod com mensagem correspondente.
*/

#include <stdio.h>

int main () {
    int num1, num2, prod;
    scanf("%i", &num1); 
    scanf("%i", &num2);
    prod = num1 * num2; 
    printf("PROD = %i\n", prod); 
    return 0;
}
