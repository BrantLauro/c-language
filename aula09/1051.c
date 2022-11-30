#include <stdio.h>
double calculaImposto(double salario) {
    double imposto = 0, faixa0 = 2000, faixa1, faixa2, faixa3;
    if (salario <= 2000) return 0;
    faixa1 = salario - faixa0;
    if (faixa1 > 0) faixa2 = faixa1 - 1000;
    if (faixa2 > 0) faixa3 = faixa2 - 1500;
    if (faixa3 > 0) faixa2 -= faixa3;
    if (faixa2 > 0) faixa1 -= faixa2;
    if (faixa3 > 0) faixa1 -= faixa3;
    if (salario > 2000 && salario <= 3000) return faixa1 * 0.08;
    else if (salario <= 4500) {
        imposto = (faixa1 * 0.08) + (faixa2 * 0.18);
        return imposto;
    } else {
        imposto = (faixa1 * 0.08) + (faixa2 * 0.18) + (faixa3 * 0.28);
        return imposto;
    }
}

int main () {
    double salario;
    scanf("%lf", &salario);
    if (calculaImposto(salario) == 0) printf("Isento\n");
    else printf("R$ %.2lf\n", calculaImposto(salario));
    return 0;
}