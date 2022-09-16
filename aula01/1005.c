/*
    Leia 2 valores de ponto flutuante de dupla precisão nota1 e nota2, que correspondem a 2 notas de um aluno. A seguir, calcule a média do aluno, sabendo que a nota1 tem peso 3.5 e a nota2 tem peso 7.5 (A soma dos pesos portanto é 11). Assuma que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal. Mostre o resultado.
*/

#include <stdio.h>

int main() {
    double nota1, nota2, media;
    scanf("%lf", &nota1);
    scanf("%lf", &nota2);
    media = ((nota1 * 3.5) + (nota2 * 7.5)) / 11;
    printf("MEDIA = %.5lf\n", media);
    return 0;
}
