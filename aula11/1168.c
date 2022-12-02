#include <stdio.h>
#include <string.h>

int quantLeds(char num[]) {
    int leds = 0, i, tamanho;
    tamanho = strlen(num);
    for(i = 0; i < tamanho; i++) {
        if(num[i] == '0') leds += 6;
        if(num[i] == '1') leds += 2;
        if(num[i] == '2') leds += 5;
        if(num[i] == '3') leds += 5;
        if(num[i] == '4') leds += 4;
        if(num[i] == '5') leds += 5;
        if(num[i] == '6') leds += 6;
        if(num[i] == '7') leds += 3;
        if(num[i] == '8') leds += 7;
        if(num[i] == '9') leds += 6;
    }
    return leds;
}

int main() {
    int n, i; char num[102];
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%s", &num);
        printf("%d leds\n", quantLeds(num));
    }
    return 0;
}
