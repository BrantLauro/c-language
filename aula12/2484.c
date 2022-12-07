#include <stdio.h>
#include <string.h>

int main() {
    int testes; char palavra[101], espacos[101];
    while (scanf("%s", palavra) != EOF) {
        strcpy(espacos, "");
        for(int j = 0; j < strlen(palavra); j++) {
            for(int c = 0; (c < strlen(palavra) - j); c++) {
                printf("%c", palavra[c]);
                if(c < ((strlen(palavra) - j) - 1)) printf(" ");
            }
            if(j < ((strlen(palavra) - 1))) {
                printf("\n %s", espacos);
                strcat(espacos, " ");
            }
        }
        printf("\n\n");
    }
    return 0;
}