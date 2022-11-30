#include <stdio.h>

double novoSalario(double salario, double *reajuste, double *percentual) {
    double novoSalario;
    if (salario <= 400) *percentual = 0.15;
    else if (salario > 400 && salario  <= 800) *percentual = 0.18;
    else if (salario > 800 && salario <= 1200) *percentual = 0.1;
    else if (salario > 1200 && salario <= 2000) *percentual = 0.07;
    else *percentual = 0.04;
    novoSalario = salario + (salario * *percentual);
    *reajuste = salario * *percentual; 
    return novoSalario;
}

int main() {
    double salario, reajuste, percentual;
    scanf("%lf", &salario);
    printf("Novo salario: %.2lf\n", novoSalario(salario, &reajuste, &percentual));
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %.0lf %%\n", percentual * 100);
    return 0;
}