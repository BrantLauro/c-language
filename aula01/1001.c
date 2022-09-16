/*
    Leia 2 valores inteiros e armazene-os nas variáveis num1 e num2. 
    Efetue a soma de num1 e num2 atribuindo o seu resultado na variável soma.
    Apresente o resultado na tela.
*/

#include <stdio.h>

int main () {
    int num1, num2, soma;
    scanf("%d", &num1);
    scanf("%d", &num2);
    soma = num1 + num2;
    printf("X = %d\n", soma);
    return 0;
}
