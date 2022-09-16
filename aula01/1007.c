/*
    Leia quatro valores inteiros num1, num2, num3 e num4. A seguir, calcule e mostre a diferença do produto de num1 e num2 pelo produto de num3 e num4 segundo a fórmula: DIFERENCA = (num1 * num2 - num3 * num4).
*/

#include <stdio.h>

int main() {
    int num1, num2, num3, num4, dif = 0;
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    scanf("%d", &num4);
    dif = ((num1 * num2) - (num3 * num4));
    printf("DIFERENCA = %d\n", dif);
    return 0;
}
