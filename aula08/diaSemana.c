#include <stdio.h>
int anoJuliano(int ano, int mes, int dia) {
    int anoJuliano = (1461 *(ano + 4800 + (mes - 14)/12))/4 + (367 *(mes - 2 - 12 *((mes - 14)/12)))/12 - (3 * ((ano + 4900 + (mes - 14)/12)/100))/4 + dia - 32075;
    return anoJuliano;
}

int diaSemana(int anoJuliano) {
    return anoJuliano % 7;
}

int main() {
    int ano, mes, dia;
    scanf("%d %d %d", &ano, &mes, &dia);
    switch(diaSemana(anoJuliano(ano, mes, dia))) {
        case 0: printf("Segunda-Feira\n"); break;
        case 1: printf("Terça-Feira\n"); break;
        case 2: printf("Quarta-Feira\n"); break;
        case 3: printf("Quinta-Feira\n"); break;
        case 4: printf("Sexta-Feira\n"); break;
        case 5: printf("Sábado\n"); break;
        default: printf("Domingo\n");
    }
    return 0;
}