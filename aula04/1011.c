/*
    Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (R). 
    A fórmula para calcular o volume é: (4/3) * pi * R3. Considere (atribua) para pi o valor 3.14159.

    Dica: Ao utilizar a fórmula, procure usar (4/3.0) ou (4.0/3), pois algumas linguagens (dentre elas o C++), 
    assumem que o resultado da divisão entre dois inteiros é outro inteiro.
*/

#include <stdio.h>
#include <math.h>

int main() {
    double pi = 3.14159, raio, volume;
    scanf("%lf", &raio);
    volume = (4.0/3) * pi * pow(raio, 3);
    printf("VOLUME = %.3lf\n", volume);
    return 0;
}
