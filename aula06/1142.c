/*
    Escreva um programa que leia um valor inteiro N. Este N é a quantidade de linhas de saída que serão apresentadas
    na execução do programa.
*/

#include <stdio.h>

int main() {
    int n, num = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", num);
            num ++;
        }
        printf("PUM\n");
        num ++;
    }
    return 0;
}
