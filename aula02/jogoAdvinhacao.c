#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num = 0, cont = 0, resp = 99;
    srand(time(NULL));
    num = rand() % 10;
    printf("\n O computador escolheu um numero entre 0 e 9, tente adivinhar: \n");
    while (num != resp) {
        printf("\n Digite um numero entre 0 e 9: ");
        scanf("%d", &resp);
        if (resp < 0 || resp > 9) continue;
        if (num < resp) printf("\n O numero e menor!\n");
        if (num > resp) printf("\n O numero e maior!\n");
        cont++;
    }
    printf("\n Parabens voce acertou com %d tentativas!\n", cont);
    return 0;
}