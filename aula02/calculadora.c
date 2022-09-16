/*  
    Calculadora:
    O usuário digita 2 números e uma operação e o computador faz a conta
    a depender da operação fornecida
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double num1, num2, resp = 0;
    char operacao;
    while (1) {
        printf("\n\n Digite um numero, un sinal de operacao e depois outro numero. Digite 0 0 0 para sair.");
        printf("\n Primeiro numero: ");
        scanf("%lf %c %lf", &num1, &operacao, &num2);
        if (num1 == 0 && num2 == 0) break;
        if (operacao == '+') resp = num1 + num2;
        if (operacao == '-') resp = num1 - num2;
        if (operacao == '*') resp = num1 * num2;
        if (operacao == '/') resp = num1 / num2;
        /*if (operacao == '%') resp = num1 % num2;*/
        if (operacao == '^') resp = pow(num1, num2);
        if (operacao == '#') {resp = sqrt(num1); num2 = 2;}
        printf("\n %.2lf %c %.2lf = %.2lf", num1, operacao, num2, resp);
    }

    return 0;
}
