#include <stdio.h>
#include <string.h>

int main() {
    int testes, quantLetras[26], maior; char string[201];
    scanf("%d", &testes);
    for(int i = 0; i < testes; i++) {
        memset(quantLetras, 0, sizeof(quantLetras));
        scanf(" %[^\n]", string);
        for(int j = 0; j < strlen(string); j++) {
            if(string[j] >= 'A' && string[j] <= 'Z') quantLetras[string[j] - 'A'] ++;
            else if(string[j] >= 'a' && string[j] <= 'z') quantLetras[string[j] - 'a'] ++;
        }
        maior = 0;
        for(int j = 0; j < 26; j++)
            if(quantLetras[j] > maior) 
                maior = quantLetras[j];
        for(int j = 0; j < 26; j++) {
            if(quantLetras[j] == maior)
                printf("%c", j + 'a');
        }
        printf("\n");
    }
    return 0;
}