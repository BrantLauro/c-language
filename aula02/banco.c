/*  
    Faça um programa que declare variáveis de tipos apropriados para dados de Movimentações
    de Contas Bancárias (NúmeroMovimentação, Valor, NúmerodoDocumento, (D)ebito e (C)redito).
    Em seguida solicite a digitação dos dados e imprima-os no formato:
    Número D/C Valor Documento
      0001  C  50.00       001
*/

#include <stdio.h>

int main() {
    int numeroMovimentacao, documento;
    double valor;
    char tipo;
    printf("\n Digite o numero da movimentacao, tipo, valor e numero do documento: ");
    scanf("%d %c %lf %d", &numeroMovimentacao, &tipo, &valor, &documento);
    printf("\n Numero D/C Valor Documento");
    printf("\n %06d % 2c % 1.2lf %09d\n\n", numeroMovimentacao, tipo, valor, documento);
    return 0;
}
