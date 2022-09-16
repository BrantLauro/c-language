/*
    A fórmula para calcular a área de uma circunferência é: area = π . raio². 
    Considerando para este problema que π = 3.14159:
    - Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por π.
    - Mostre o resultado.
*/

#include <stdio.h>
#include <math.h>

int main(){
    double raio, area, n = 3.14159;
    scanf("%lf", &raio);
    area = n * pow(raio, 2);
    printf("A=%.4lf\n", area);
    return 0;
}
