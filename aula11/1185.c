#include <stdio.h>

int main() {
    int i, j, q = 0, aux = 2; double matriz[12][12], soma = 0; char operacao[5];
    scanf("%s", &operacao);
    for(i = 0; i < 12; i++) {
        for(j = 0; j < 12; j++) {
            scanf("%lf", &matriz[i][j]);
            if((j - aux) <= i){
                soma += matriz[i][j];
                q++;
            }   
        }
        aux -= 2;
    }
    if(operacao[0] == 'S') printf("%.1lf\n", soma);
    if(operacao[0] == 'M') printf("%.1lf\n", soma/q);
}