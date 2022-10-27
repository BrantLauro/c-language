/*
    Leia 1 valor inteiro N (2 < N < 1000). A seguir, mostre a tabuada de N:      
    1 x N = N      2 x N = 2N        ...       10 x N = 10N
*/

#include <stdio.h>

int main() {
    int num, cont = 1;
    scanf("%d", &num);
    while (cont <= 10) {
        printf("%d x %d = %d\n", cont, num, (num * cont));
        cont++;
    }
    return 0;
}
