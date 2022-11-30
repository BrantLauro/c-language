#include <stdio.h>
int ehBissexto(int ano) {
    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) return 1;
    return 0;
}

int main() {
    int ano;
    scanf("%d", &ano);
    switch(ehBissexto(ano)) {
        case 0: printf("Ano Nao Bissexto\n"); break;
        default: printf("Ano Bissexto");
    }
    return 0;
}
