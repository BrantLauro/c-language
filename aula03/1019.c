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
