/*
    Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em Km) 
    e o total de combustível gasto (em litros).
*/

#include <stdio.h>

int main() {
    int km;
    double total, gas;
    scanf("%d %lf", &km, &gas);
    total = km / gas;
    printf("%.3lf km/l\n", total);
    return 0;
}
