/*
    Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias

    Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias. 
    Nos casos de teste nunca haverá uma situação que permite 12 meses e alguns dias, como 360, 363 ou 364. 
    Este é apenas um exercício com objetivo de testar raciocínio matemático simples.
*/

#include <stdio.h>

int main() {
    int dias, meses, anos;
    scanf("%d", &dias);
    anos = dias / 365;
    dias -= (anos * 365);
    meses = dias / 30;
    dias -= (meses * 30);

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}
