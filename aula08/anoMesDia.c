#include <stdio.h>
long int anoMesDia(long int anoJuliano) {
    long int B, N, K, J, Dia, Mes, Ano, anoMesDia;
    B = anoJuliano + 68569;
    N = (4 * B)/146097;
    B = B - ((146097 * N + 3)/4);
    K = (4000 * (B + 1))/1461001;
    B = B-(1461 * K)/4 + 31;
    J = (80 * B)/2447;
    Dia = B - (2447 * J)/80;
    B = (J / 11);
    Mes = J + 2 - (12 * B);
    Ano = 100 * (N - 49) + K + B;
    Ano *= 10000;
    Mes *= 100;
    anoMesDia = Ano + Mes + Dia;
    return anoMesDia;
}

int main() {
    long int anoJuliano;
    scanf("%ld", &anoJuliano);
    printf("%ld", anoMesDia(anoJuliano));
    return 0;
}