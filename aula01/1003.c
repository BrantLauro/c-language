/*
    Leia dois valores inteiros, no caso para variáveis num1 e num2. 
    A seguir, calcule a soma entre elas e atribua à variável soma. 
    A seguir escrever o valor desta variável.
*/

#include <stdio.h>

int main() {
    int num1, num2, soma;
    scanf("%d", &num1);
    scanf("%d", &num2);
    soma = num1 + num2;
    printf("SOMA = %d\n", soma);
    return 0;
}
