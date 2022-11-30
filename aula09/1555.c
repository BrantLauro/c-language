#include <stdio.h>
#include <math.h>
void funcoes() {
    int Beto = 0, Carlos = 0, Rafael = 0, x, y;
    scanf("%d %d", &x, &y);
    Rafael = pow((3 * x), 2) + pow(y, 2);
    Beto = (2 * pow(x, 2)) + pow((5 * y), 2);
    Carlos = (-100 * x) + pow(y, 3);
    if (Rafael > Beto && Rafael > Carlos) printf("Rafael ganhou\n");
    else if (Beto > Carlos) printf("Beto ganhou\n");
    else printf("Carlos ganhou\n");
}

int main () {
    int testes;
    scanf("%d", &testes);
    for(int i = 0; i < testes; i++) funcoes();
    return 0;
}