#include <stdio.h>
#include <string.h>

int main() {
    int testes, aux, cont, A, B; char str[12221*5], inversor[12221*5], vazia[12221*5];
    scanf("%d", &testes);
    for(int i = 0; i < testes; i++) {
        scanf("%d %d", &A, &B);
        aux = 0; cont = 0; strcpy(inversor, vazia);
        for(int i = A; i <= B; i++) {
            aux = A + cont;
            printf("%d", aux);
            sprintf(str, "%d", aux);
            strcat(inversor, str);
            cont ++;
        }
        for(int j = (strlen(inversor) - 1); j >= 0; j--){
            printf("%c", inversor[j]);
        }
        printf("\n");
    }
    return 0;
}