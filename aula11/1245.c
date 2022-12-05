#include <string.h>
#include <stdio.h>

int main () {
    int n, i, tamanho, pares = 0, sapatos[61][2]; char pe;
    for(i = 0; i < 61; i++) {
        sapatos[i][0] = 0;
        sapatos[i][1] = 0;
    }

    while(scanf("%d", &n) != EOF) {
        scanf("%d %c", &tamanho, &pe);
        if(pe == 'D') sapatos[tamanho][0]++;
        if(pe == 'E') sapatos[tamanho][1]++;

        for(i = 0; i < 61; i++) {
            if(sapatos[i][0] != 0 && sapatos[i][1] != 0) pares++;
        }
        printf("%d", pares);
    }
}