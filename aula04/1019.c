/*
    Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, 
    e informe-o expresso no formato horas:minutos:segundos.
*/

#include <stdio.h>

int main() {
    int segundos, minutos, horas;
    scanf("%d", &segundos);
    horas = segundos / 3600;
    segundos -= (3600 * horas);
    minutos = segundos / 60;
    segundos -= (60 * minutos);

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}
