/*
    Leia 3 valores, no caso, variáveis nota1, nota2 e nota3, que são as três notas de um aluno. A seguir, calcule a média do aluno, sabendo que a nota1 tem peso 2, a nota2 tem peso 3 e a nota3 tem peso 5. Considere que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal. Mostre o resultado.
*/

#include <stdio.h>

int main() {
    double nota1, nota2, nota3, media;
    scanf("%lf", &nota1);
    scanf("%lf", &nota2);
    scanf("%lf", &nota3);
    media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;
    printf("MEDIA = %.1lf\n", media);
    return 0;
}
