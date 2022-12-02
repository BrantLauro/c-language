#include <stdio.h>
void vetor(int n) {
    int X[n], i, num, menor, posicaoMenor;
    scanf("%d", &num);
    X[0] = num; menor = num; posicaoMenor = 0;
    for(i = 1; i < n; i++) {
        scanf("%d", &num);
        X[i] = num;
        if (num < menor) {
            menor = num;
            posicaoMenor = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicaoMenor);
}

int main() {
    int n;
    scanf("%d", &n);
    vetor(n);
    return 0;
}