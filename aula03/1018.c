#include <stdio.h>

int main() {
    int valor, notas100, notas50, notas20, notas10, notas5, notas2, notas1, total;
    scanf("%d", &valor);
    total = valor;
    notas100 = valor / 100;
    valor -= (notas100 * 100);
    notas50 = valor / 50;
    valor -= (notas50 * 50);
    notas20 = valor / 20;
    valor -= (notas20 * 20);
    notas10 = valor / 10;
    valor -= (notas10 * 10);
    notas5 = valor / 5;
    valor -= (notas5 * 5);
    notas2 = valor / 2;
    valor -= (notas2 * 2);
    notas1 = valor;

    printf("%d\n", total);
    printf("%d nota(s) de R$ 100,00\n", notas100);
    printf("%d nota(s) de R$ 50,00\n", notas50);
    printf("%d nota(s) de R$ 20,00\n", notas20);
    printf("%d nota(s) de R$ 10,00\n", notas10);
    printf("%d nota(s) de R$ 5,00\n", notas5);
    printf("%d nota(s) de R$ 2,00\n", notas2);
    printf("%d nota(s) de R$ 1,00\n", notas1);
    
    return 0;
}
