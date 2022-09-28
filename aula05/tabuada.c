/*
   Faça um programa que calcule a tabuada de um número usando o while
*/

#include <stdio.h>

int main() {
    int num, cont = 0;
    scanf("%d", &num);
    while (cont <= 10) {
        printf("%d x %d = %d\n", num, cont, (num * cont));
        cont++;
    }
    return 0;
}
