#include <stdio.h>

int main() {
    int cod1, cod2, quant1, quant2;
    double val1, val2, total;
    scanf("%d %d %lf", &cod1, &quant1, &val1);
    scanf("%d %d %lf", &cod2, &quant2, &val2);
    total = (quant1 * val1) + (quant2 * val2);
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}
