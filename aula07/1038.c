#include <stdio.h>
 
int main() {
    int cod, quant; double preco = 0, total = 0;
    scanf("%d %d", &cod, &quant);
    switch (cod) {
    case 1: preco = 4; break;
    case 2: preco = 4.5; break;
    case 3: preco = 5; break;
    case 4: preco = 2; break;
    case 5: preco = 1.5;
    }
    total = preco * quant;
    printf("Total: R$ %.2lf\n", total);
    return 0;
}