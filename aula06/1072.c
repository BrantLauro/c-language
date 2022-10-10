/*
    Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
    Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo, 
    mostrando essas informações.
*/

#include <stdio.h>

int main() {
    int n, x, in = 0, out = 0;
    scanf("%d", &n);
    for (int quant = 0; quant < n; quant++) {
        scanf("%d", &x);
        if (x >= 10 && x <= 20) {
            in ++;
        } else {
            out ++;
        }
    }
    printf("%d in\n%d out\n", in, out);
    return 0;
}
