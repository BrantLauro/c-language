#include <stdio.h>
#include <string.h>

int main() {
    int testes, contador; char A[10001], B[10001];
    scanf("%d", &testes);
    for(int i = 0; i < testes; i++) {
        scanf(" %s  %s", A, B);
        contador = 0;
        for(int j = 0; j < strlen(A); j++) {
            while(strncmp(A, B, (j + 1)) != 0) {
                if(A[j] != 'z') A[j]++;
                else A[j] = 'a';
                contador++;
            }
        }
        printf("%d\n", contador);
    }
    return 0;
}