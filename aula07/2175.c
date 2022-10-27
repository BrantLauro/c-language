#include <stdio.h>
#include <string.h>
 
int main() {
    double o, b, i;
    scanf("%lf %lf %lf", &o, &b, &i);
    if (o == b || o == i || b == i) printf("Empate\n");
    else {
        if (o < b && o < i) printf("Otavio\n");
        if (b < o && b < i) printf("Bruno\n");
        if (i < b && i < o) printf("Ian\n");
    }
    return 0;
}