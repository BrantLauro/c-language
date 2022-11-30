#include <stdio.h>
int crescimento(int p1, int p2, double t1, double t2) {
    int anos;
    for(anos = 0; p1 <= p2;) {
        p1 += (p1 * t1)/100;
        p2 += (p2 * t2)/100;
        anos++
        if(anos > 100) {
            return -1;
            break;
        }
    }
    if (anos <= 100) return anos;
}

int main () {
    int testes, p1, p2, anos; double t1, t2;
    scanf("%d", &testes);
    for(int i = 0; i < testes; i++) {
        scanf("%d %d %lf %lf", &p1, &p2, &t1, &t2);
        anos = crescimento(p1, p2, t1, t2);
        if(anos == -1) printf("Mais de 1 seculo.\n");
        else printf("%d anos.\n", anos);
    }
    return 0;
}
