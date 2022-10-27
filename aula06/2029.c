/*
    Seu Júlio precisa agora que você faça um programa que informado o volume de mel em cm3 e o diâmetro da parte interna do
    recipiente em cm, calcule e mostre:
    - Qual deve ser a altura(em cm) da parte interna do recipiente;

    - A área(em cm2) da boca(entrada) do recipiente.

    Obs.: Considere π = 3.14
*/

#include <stdio.h>
#include <math.h>

int main() {
    double volume, diametro, boca, altura, pi = 3.14;
    while(scanf("%lf %lf", &volume, &diametro) != EOF) {
        boca = pow((diametro/2), 2) * pi;
        altura = volume / boca;
        printf("ALTURA = %.2lf\nAREA = %.2lf\n", altura, boca);
    }
    return 0;
}
