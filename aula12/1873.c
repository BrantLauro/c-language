#include <stdio.h>
#include <string.h>

int main() {
    int testes; char A[10], B[10];
    scanf("%d", &testes);
    for(int i = 0; i < testes; i++) {
        scanf("%s  %s", A, B);
        if(strcmp(A, B) == 0) printf("empate\n");
        else if(
        (strcmp(A, "tesoura") == 0 && strcmp(B, "papel") == 0) || 
        (strcmp(A, "papel") == 0 && strcmp(B, "pedra") == 0) || 
        (strcmp(A, "pedra") == 0 && strcmp(B, "lagarto") == 0) || 
        (strcmp(A, "lagarto") == 0 && strcmp(B, "spock") == 0) ||
        (strcmp(A, "spock") == 0 && strcmp(B, "tesoura") == 0) || 
        (strcmp(A, "tesoura") == 0 && strcmp(B, "lagarto") == 0) || 
        (strcmp(A, "lagarto") == 0 && strcmp(B, "papel") == 0) ||
        (strcmp(A, "papel") == 0 && strcmp(B, "spock") == 0) || 
        (strcmp(A, "spock") == 0 && strcmp(B, "pedra") == 0) || 
        (strcmp(A, "pedra") == 0 && strcmp(B, "tesoura") == 0)) printf("rajesh\n");
        else printf("sheldon\n");
    }
    return 0;
}
